#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  double D,L,V1,V2; cin >> D >> L >> V1 >> V2;

  double ans = (L-D)/(V1+V2);

  cout << fixed << setprecision(20) << ans << endl;

  return 0;
}
