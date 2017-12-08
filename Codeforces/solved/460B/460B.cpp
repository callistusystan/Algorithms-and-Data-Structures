#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll sum(ll n) {
  ll ans = 0;
  while (n) {
    ans += n%10;
    n /= 10;
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A,B,C; cin >> A >> B >> C;
  vector<ll> ans;
  for (ll sx=1;sx<=82;sx++) {
    ll p = 1;
    for (int i=0;i<A;i++) p*=sx;
    ll x = B*p + C;
    if (sum(x) == sx && 0 < x && x < 1e9) ans.push_back(x);
  }
  cout << ans.size() << endl;
  if (ans.size()) {
    for (ll i : ans) cout << i << " ";
    cout << endl;
  }
  return 0;
}
