#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A, B; cin >> A >> B;

  ll ans = 0;
  for (int bits=2;bits<60;bits++) {
    ll num = (1LL<<bits) -1;
    for (int zeroAt=0;zeroAt<bits-1;zeroAt++) {
      num ^= (1LL<<zeroAt);
      if (A <= num && num <= B) ans++;
      num ^= (1LL<<zeroAt);
    }
  }
  cout << ans << endl;
  return 0;
}
