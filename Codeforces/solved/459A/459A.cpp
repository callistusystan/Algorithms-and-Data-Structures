#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<pii> P(2);
  for (int i=0;i<2;i++) {
    cin >> P[i].X >> P[i].Y;
  }

  sort(P.begin(), P.end());

  if (P[0].X == P[1].X) {
    // both left
    int D = P[1].Y - P[0].Y;
    cout << P[0].X + D << " " << P[0].Y << " " << P[1].X + D << " " << P[1].Y << endl;
  } else if (P[0].Y == P[1].Y) {
    // both bottom
    int D = P[1].X - P[0].X;
    cout << P[0].X << " " << P[0].Y + D << " " << P[1].X << " " << P[1].Y + D << endl;
  } else {
    // opposite ends
    if (abs(P[1].X-P[0].X) == abs(P[1].Y -P[0].Y)) {
      cout << P[1].X << " " << P[0].Y << " " << P[0].X << " " << P[1].Y << endl;
    } else {
      cout << -1 << endl;
    }
  }

  return 0;
}
