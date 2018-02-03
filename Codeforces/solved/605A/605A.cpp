#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  if (N == 1) {
    cout << "0\n";
    return 0;
  }
  vi pos(N);
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    ai--;
    pos[ai] = i;
  }
  int ans = 0, cur = 1;
  for (int i=1;i<N;i++) {
    if (pos[i] > pos[i-1]) cur++;
    else cur = 1;
    ans = max(ans, cur);
  }
  cout << N-ans << endl;
  return 0;
}
