#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A,B,X,Y,Z; cin >> A >> B >> X >> Y >> Z;
  A -= X*2;
  A -= Y;
  B -= Y;
  B -= Z*3;
  ll ans = 0;
  if (A < 0) ans += abs(A);
  if (B < 0) ans += abs(B);
  cout << ans << endl;
  return 0;
}
