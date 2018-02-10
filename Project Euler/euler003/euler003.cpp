#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    ll N; cin >> N;
    ll ans = -1;
    for (ll i=2;i*i<=N;i++) {
      if (N%i == 0) {
        ans = max(ans, i);
        while (N%i == 0) N /= i;
      }
    }
    if (N > 1) cout << N << endl;
    else cout << ans << endl;
  }
  return 0;
}
