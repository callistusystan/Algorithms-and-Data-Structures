#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, X; cin >> N >> X;
  vector<bool> seen(1e5+5, false);
  ll ans = 0;
  for (ll fac1=1;fac1<=N;fac1++) {
    if (!seen[fac1] && X%fac1 == 0) {
      ll fac2 = X/fac1;

      if (1 <= fac2 && fac2 <= N) {
        seen[fac1] = true;
        seen[fac2] = true;
        if (fac1 == fac2) ans++;
        else ans += 2;
      }
    }
  }

  cout << ans << endl;

  return 0;
}
