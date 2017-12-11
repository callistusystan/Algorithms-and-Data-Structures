#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll X,Y,A,B; cin >> X >> Y >> A >> B;
  ll C,D;
  ll LCM = (X*Y)/__gcd(X,Y);
  C = ((A+LCM-1)/(LCM))*LCM;
  D = (B/(LCM))*LCM;
  if (C > D) cout << 0;
  else {
    cout << (D-C)/(LCM) + 1;
  }
  cout << endl;
  return 0;
}
