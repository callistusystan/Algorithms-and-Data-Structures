#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<vi> A(20, vi(20));

int f(int x, int y) {
  int ans = 1;
  if (x+3 < 20) {
    int cur = 1;
    for (int i=0;i<4;i++) cur *= A[x+i][y];
    ans = max(ans, cur);
  }
  if (y+3 < 20) {
    int cur = 1;
    for (int i=0;i<4;i++) cur *= A[x][y+i];
    ans = max(ans, cur);
  }
  if (x+3 <20 && y+3 < 20) {
    int cur = 1;
    for (int i=0;i<4;i++) cur *= A[x+i][y+i];
    ans = max(ans, cur);
  }
  if (x+3 < 20 && y-3 >= 0) {
    int cur = 1;
    for (int i=0;i<4;i++) cur *= A[x+i][y-i];
    ans = max(ans, cur);
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i=0;i<20;i++)
    for (int j=0;j<20;j++)
      cin >> A[i][j];

  int ans = 0;
  for (int i=0;i<20;i++)
    for (int j=0;j<20;j++)
      ans = max(ans, f(i,j));
  cout << ans << endl;
  return 0;
}
