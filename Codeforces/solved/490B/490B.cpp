#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  map<int, int> back, front;
  for (int i=0;i<N;i++) {
    int ai, bi; cin >> ai >> bi;
    back[ai] = bi;
    front[bi] = ai;
  }
  vi ans(N);
  for (auto p : back)
    if (!front.count(p.first)) ans[0] = p.first;
  for (auto p : front)
    if (!back.count(p.first)) ans[N-1] = p.first;
  for (int i=2;i<N;i+=2) ans[i] = back[ans[i-2]];
  int cur = 0;
  for (int i=1;i<N;i+=2) {
    ans[i] = back[cur];
    cur = ans[i];
  }
  for (int i=0;i<N;i++) cout << ans[i] << " ";
  cout << endl;
  return 0;
}
