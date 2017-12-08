#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int R, C; cin >> R >> C;
  vector<string> cake(R);
  for (int i=0;i<R;i++) {
    cin >> cake[i];
  }

  vector<bool> row(R, true), col(C, true);

  for (int i=0;i<R;i++) {
    for (int j=0;j<C;j++) {
      if (cake[i][j] == 'S') {
        row[i] = false;
        col[j] = false;
      }
    }
  }

  int eatR, eatC;
  eatR = count(row.begin(), row.end(), true);
  eatC = count(col.begin(), col.end(), true);

  int ans = eatC*R + eatR*(C-eatC);

  cout << ans << endl;


  return 0;
}
