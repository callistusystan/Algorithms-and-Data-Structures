#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  ll R,X,Y,XX,YY; cin >> R >> X >> Y >> XX >> YY;

  double dist = sqrt((XX-X)*(XX-X) + (YY-Y)*(YY-Y));

  cout << ceil(dist/(2*R)) << endl;

  return 0;
}
