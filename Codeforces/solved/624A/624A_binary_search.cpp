#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  double D,L,V1,V2; cin >> D >> L >> V1 >> V2;

  double lo,hi;
  lo = 0; hi = 10000;
  int it = 0;
  while (fabs(lo-hi) > EPS && it++ < 500) {
    double mid = (lo+hi)/2;
    double d1,d2;
    d1 = V1*mid; d2 = V2*mid;
    if (L-d2 - d1 > D) lo = mid;
    else hi = mid;
  }

  cout << fixed << setprecision(12) << lo << endl;

  return 0;
}
