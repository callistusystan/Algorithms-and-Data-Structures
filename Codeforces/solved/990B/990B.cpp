#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  map<int, int> cnt;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    cnt[ai]++;
  }
  int ans = 0;
  for (auto p : cnt) {
    auto it = cnt.upper_bound(p.first);
    if (it != cnt.end() && it->first <= p.first+K) continue;
    ans += p.second;
  }
  cout << ans << endl;
  return 0;
}
