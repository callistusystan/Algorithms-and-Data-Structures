#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, M;
int dR[4] = {-1,0,1,0}, dC[4] = {0,1,0,-1};
vector<string> A(15);

int f(int i, int j) {
  for (int k=0;k<4;k++) {
    int nextI, nextJ;
    nextI = i+dR[k];
    nextJ = j+dC[k];
    if (nextI >= 0 && nextI < N && nextJ >= 0 && nextJ < M) {
      if (A[nextI][nextJ] == 'W') {
        A[i][j] = '.';
        A[nextI][nextJ] = '.';
        return 1;
      }
    }
  }
  return 0;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> M;
  for (int i=0;i<N;i++) cin >> A[i];
  int ans = 0;
  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      if (A[i][j] == 'P') ans += f(i,j);
    }
  }
  cout << ans << endl;
  return 0;
}
