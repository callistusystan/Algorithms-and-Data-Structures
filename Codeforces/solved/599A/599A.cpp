#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll D1,D2,D3;
  cin >> D1 >> D2 >> D3;

  ll ans = D1 + D2 + D3;
  ans = min(ans, (D1+D3)*2);
  ans = min(ans, (D2+D3)*2);
  ans = min(ans, (D1+D2)*2);

  cout << ans << endl;

  return 0;
}
