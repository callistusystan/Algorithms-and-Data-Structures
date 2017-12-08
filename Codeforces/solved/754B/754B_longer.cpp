#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<string> A(4);

bool check(int a, int b) {
  int cntX = 0, cntE = 0;
  // hor
  if (b+2 < 4) {
    for (int i=0;i<3;i++) {
      if (A[a][b+i] == 'x') cntX++;
      if (A[a][b+i] == '.') cntE++;
    }
    if (cntX == 2 && cntE == 1) return true;
  }
  // ver
  if (a+2 < 4) {
    cntX = 0; cntE = 0;
    for (int i=0;i<3;i++) {
      if (A[a+i][b] == 'x') cntX++;
      if (A[a+i][b] == '.') cntE++;
    }
    if (cntX == 2 && cntE == 1) return true;
  }
  // diag
  if (a+2 < 4 && b+2 < 4) {
    cntX = 0; cntE = 0;
    for (int i=0;i<3;i++) {
      if (A[a+i][b+i] == 'x') cntX++;
      if (A[a+i][b+i] == '.') cntE++;
    }
    if (cntX == 2 && cntE == 1) return true;
  }
  // diag
  if (a+2 < 4 && b-2 >= 0) {
    cntX = 0; cntE = 0;
    for (int i=0;i<3;i++) {
      if (A[a+i][b-i] == 'x') cntX++;
      if (A[a+i][b-i] == '.') cntE++;
    }
    if (cntX == 2 && cntE == 1) return true;
  }
  return false;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i=0;i<4;i++) cin >> A[i];
  bool can = false;
  for (int i=0;i<4;i++) {
    for (int j=0;j<4;j++) {
      can |= check(i, j);
    }
  }
  if (can) cout << "YES";
  else cout << "NO";
  cout << endl;
  return 0;
}
