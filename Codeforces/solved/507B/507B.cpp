#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  ll R,X,Y,XX,YY; cin >> R >> X >> Y >> XX >> YY;

  ll distSq = (XX-X)*(XX-X) + (YY-Y)*(YY-Y);

  ll guess = max(0LL, (ll)sqrt(distSq/(2*R)));

  while (guess*guess*4*R*R > distSq) guess--;
  while (guess*guess*4*R*R < distSq) guess++;

  cout << guess << endl;

  return 0;
}
