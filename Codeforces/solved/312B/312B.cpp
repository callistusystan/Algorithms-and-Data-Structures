#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  double a,b,c,d; cin >> a >> b >> c >> d;
  double probAW = a/b, probBW = c/d;
  double probAL = 1-probAW, probBL = 1-probBW;
  cout << fixed << setprecision(12) << probAW/(1-probAL*probBL) << endl;
  return 0;
}
