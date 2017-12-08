#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll L, R, K; cin >> L >> R >> K;
  vector<ll> ans;
  ll cur = 1;
  while (1) {
    if (L <= cur && cur <= R) ans.push_back(cur);
    // if (cur*K > R) break;
    // NOTE: we cant do the above, because it will overflow
    if (cur > R/K) break;
    cur *= K;
  }
  if (ans.size()) {
    for (ll i : ans) cout << i << " ";
  } else cout << -1;
  cout << endl;
  return 0;
}
