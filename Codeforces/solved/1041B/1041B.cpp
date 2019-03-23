#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A,B,X,Y; cin >> A >> B >> X >> Y;
  ll g = __gcd(X, Y);
  X /= g; Y /= g;
  ll mxA = A/X, mxB = B/Y;
  cout << min(mxA, mxB) << endl;
  return 0;
}
