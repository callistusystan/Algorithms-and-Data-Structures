#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll mod = 10000000000LL;

ll exp(ll x, ll b) {
  if (b == 0) return 1;
  else if (b%2 == 0) {
    return exp((x*x)%mod, b/2)%mod;
  }
  return (x*exp((x*x)%mod, (b-1)/2))%mod;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll ans = 0;
  for (ll i=1;i<=1000;i++) {
    cout << i << "^" << i << " = " << exp(i,i) << endl;
    ans += exp(i, i);
    ans = ans % mod;
  }
  cout << ans << endl;
  return 0;
}
