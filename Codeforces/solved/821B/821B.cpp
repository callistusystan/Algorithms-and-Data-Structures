#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll sumTo(ll n) {
  return n*(n+1)/2;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int M, B; cin >> M >> B;
  ll ans = 0;
  for (ll y=B;y>=0;y--) {
    // y = -x/m + b
    // x = (b-y)*m
    ll x = (B-y)*M;
    ans = max(ans, (y+1)*sumTo(x) + (x+1)*sumTo(y));
  }
  cout << ans << endl;
  return 0;
}
