#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<string> A(4);
int dr[4] = {0,1,1,1};
int dc[4] = {1,1,0,-1};

bool check(int a, int b) {
  for (int k=0;k<4;k++) {
    int cntX = 0, cntE = 0;
    int x = a, y = b;
    for (int i=0;i<3;i++) {
      if (x < 0 || x >= 4 || y < 0 || y >= 4) break;
      if (A[x][y] == 'x') cntX++;
      else if (A[x][y] == '.') cntE++;
      x += dr[k]; y += dc[k];
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
