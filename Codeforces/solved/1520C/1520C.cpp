#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    if (N == 1) cout << "1\n";
    else if (N == 2) cout << "-1\n";
    else {
      vector<vi> A(N, vi(N));
      int xx = 0, yy = 0;
      int x = xx, y = yy;
      for (int i=1;i<=N*N;i++) {
        A[x][y] = i;
        
        if (x+1 < N && y+1 < N) {
          x++; y++;
        } else {
          if (yy == 0) {
            yy = xx + 1;
            xx = 0;
          } else {
            xx = yy;
            yy = 0;
          }
          x = xx;
          y = yy;
        }
      }
      for (int i=0;i<N;i++) {
        for (int j=0;j<N;j++) {
          cout << A[i][j] << " \n"[j==N-1];
        }
      }
    }
  }
  return 0;
}
