#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, M, K;
vector<string> A(505);
vector<vector<bool>> visited(505, vector<bool>(505, false));
int dr[4] = {-1,0,1,0};
int dc[4] = {0,1,0,-1};

void dfs(int i, int j) {
  visited[i][j] = true;
  for (int k=0;k<4;k++) {
    int ni, nj;
    ni = i+dr[k]; nj = j+dc[k];
    if (ni < 0 || ni >= N || nj <0 || nj >= M) continue;
    if (!visited[ni][nj] && A[ni][nj] == '.') {
      dfs(ni, nj);
    }
  }
  if (K > 0) {
    A[i][j] = 'X';
    K--;
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> M >> K;
  for (int i=0;i<N;i++) cin >> A[i];

  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      if (K > 0 && A[i][j] == '.' && !visited[i][j]) {
        dfs(i,j);
      }
    }
  }

  for (int i=0;i<N;i++) {
    cout << A[i] << endl;
  }

  return 0;
}
