#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi get_divisors(ll x) {
  vi divisors;
  for (ll i=1;i*i<=x;i++) {
    if (x%i == 0) divisors.push_back(i);
  }
  return divisors;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A, B; cin >> A >> B;
  ll ans = LLONG_MAX/2;

  vi divisorsA = get_divisors(A), divisorsB = get_divisors(B);

  for (ll i=1;i<=sqrt(A+B);i++) {
    if ((A+B)%i) continue;
    ll j = (A+B)/i;
    if (j == 0) continue;
    bool can = false;
    for (int k : divisorsA)
      if (k <= min(i, j) && A/k <= max(i, j)) {
        can = true;
        break;
      }
    if (!can) {
      for (int k : divisorsB)
        if (k <= min(i, j) && B/k <= max(i, j)) {
          can = true;
          break;
        }
    }
    if (can) ans = min(ans, 2*i + 2*j);
  }
  cout << ans << endl;
  return 0;
}