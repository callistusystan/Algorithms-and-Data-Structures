#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, M;
vector<string> A(55);
int dr[4] = {-1,0,1,0};
int dc[4] = {0,1,0,-1};

bool dfs(int i, int j, int l, vector<vector<bool>> &visited, int x, int y) {
  visited[i][j] = true;
  for (int k=0;k<4;k++) {
    int nextI, nextJ;
    nextI = i+dr[k];
    nextJ = j+dc[k];
    if (nextI < 0 || nextI >= N || nextJ < 0 || nextJ >=M) continue;
    if (!visited[nextI][nextJ] && A[nextI][nextJ] == A[i][j]) {
      if (dfs(nextI, nextJ, l+1, visited, x, y)) return true;
    } else if (nextI == x && nextJ == y && l >= 3) return true;
  }
  return false;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> M;
  for (int i=0;i<N;i++) cin >> A[i];

  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      vector<vector<bool>> visited(N, vector<bool>(M));
      if (dfs(i, j, 0, visited, i, j)) {
        cout << "Yes\n";
        return 0;
      }
    }
  }
  cout << "No\n";
  return 0;
}
