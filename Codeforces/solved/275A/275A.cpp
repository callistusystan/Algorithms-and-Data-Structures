#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int dr[4] = {-1,0,1,0};
int dc[4] = {0,1,0,-1};
vector<vi> A(3, vi(3, 1)), B(3, vi(3));

void f(int i, int j, int k) {
  if (i < 0 || i >= 3 || j < 0 || j >= 3 || (k%2 == 0)) return;
  A[i][j] = 1 - A[i][j];
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i=0;i<3;i++) {
    for (int j=0;j<3;j++) {
      int ai; cin >> ai;
      f(i, j, ai);
      for (int k=0;k<4;k++) {
        f(i+dr[k], j+dc[k], ai);
      }
    }
  }

  for (int i=0;i<3;i++) {
    for (int j=0;j<3;j++) cout << A[i][j];
    cout << endl;
  }

  return 0;
}
