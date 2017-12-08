#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<ll> factor(ll n) {
  vector<ll> res;
  for (ll i=2;i*i<=n;i++) {
    if (n%i == 0) {
      res.push_back(i);
      while (n%i == 0) n/=i;
    }
  }
  if (n > 1) res.push_back(n);
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; cin >> N;
  vector<ll> A = factor(N);

  ll ans = 1;
  for (ll i : A) ans *= i;
  cout << ans << endl;

  return 0;
}
