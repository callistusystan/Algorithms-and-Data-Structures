#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vi cnt(N);
  for (int i=0;i<M;i++) {
    int ai; cin >> ai;
    cnt[ai-1]++;
  }
  cout << *min_element(cnt.begin(), cnt.end()) << endl;
  return 0;
}
