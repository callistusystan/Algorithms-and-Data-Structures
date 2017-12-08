#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A,B; cin >> A >> B;
  if (B-A < 10) {
    ll ans = 1;
    for (ll i=A+1;i<=B;i++) {
      ans = (ans*(i%10))%10;
    }
    cout << ans;
  } else cout << 0;
  cout << endl;

  return 0;
}
