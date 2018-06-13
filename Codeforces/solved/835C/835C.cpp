#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, Q, C; 
ll sum[11][105][105];
vector<vi> A(1e5+5);

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> Q >> C;
  for (int i=0;i<N;i++) {
    int x,y,s; cin >> x >> y >> s;
    A[i] = { x, y, s };
  }
  for (int i=0;i<C+1;i++) {
    for (int j=0;j<N;j++) {
      int x = A[j][0], y = A[j][1], s = A[j][2];
      sum[i][x][y] += (s+i)%(C+1);
    }
    for (int j=1;j<=100;j++) {
      sum[i][0][j] += sum[i][0][j-1];
      sum[i][j][0] += sum[i][j-1][0];
    }
    for (int j=1;j<=100;j++)
      for (int k=1;k<=100;k++)
        sum[i][j][k] += sum[i][j-1][k] + sum[i][j][k-1] - sum[i][j-1][k-1];
  }
  while (Q--) {
    int t,x1,y1,x2,y2; cin >> t >> x1 >> y1 >> x2 >> y2;
    cout << sum[t%(C+1)][x2][y2] - sum[t%(C+1)][x2][y1-1] - sum[t%(C+1)][x1-1][y2] + sum[t%(C+1)][x1-1][y1-1] << endl;
  }
  return 0;
}
