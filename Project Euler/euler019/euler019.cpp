#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int day_of_week(int jd) {
  return jd%7;
}

int to_julian(ll y, int m, int d) {
  return 1461 * (y + 4800 + (m - 14) / 12) / 4 +
         367 * (m - 2 - (m - 14) / 12 * 12) / 12 -
         3 * ((y + 4900 + (m - 14) / 12) / 100) / 4 + d - 32075;
}

bool leap_year(ll y) {
  return (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0));
}

int days_in(ll y, int m) {
  return m == 2 ? 28 + leap_year(y) : 31 - (m -1) % 7 % 2;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    ll Y1, Y2; int D1,M1,D2,M2;
    cin >> Y1 >> M1 >> D1 >> Y2 >> M2 >> D2;
    // find jd relative to 1900
    ll diff = Y2 - Y1;
    Y1 = (Y1-1900)%400 + 1900;
    Y2 = Y1 + diff;
    int start = to_julian(Y1, M1, D1), end = to_julian(Y2, M2, D2), ans = 0;
    for (int i=start;i<=end;i++) {
      if (D1 == 1 && day_of_week(i) == 6) ans++;
      D1++;
      if (D1 > days_in(Y1, M1)) {
        D1 = 1;
        M1++;
        if (M1 > 12) M1 = 1, Y1++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
