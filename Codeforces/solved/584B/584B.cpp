#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll MOD = 1e9+7;

ll expmod(ll x, ll e) {
  if (e == 0) return 1;
  ll res = expmod(x, e/2);
  res = (res*res)%MOD;
  if (e%2) res = (res*x)%MOD;
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; cin >> N;
  ll res = (expmod(3, 3*N) - expmod(7, N))%MOD;
  if (res < 0) res += MOD;
  cout << res << endl;
  return 0;
}
