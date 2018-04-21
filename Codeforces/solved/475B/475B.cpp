#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N,M;
string hor, ver;
vector<string> A(500);

void dfs(int x, int y, vector<vi> &visited) {
  visited[x][y] = 1;
  if      (hor[x] == '>' && y+1 < M && !visited[x][y+1]) dfs(x,y+1, visited);
  else if (hor[x] == '<' && y-1 >= 0 && !visited[x][y-1]) dfs(x,y-1, visited);
  if (ver[y] == 'v' && x+1 < N && !visited[x+1][y]) dfs(x+1,y, visited);
  else if (ver[y] == '^' && x-1 >= 0 && !visited[x-1][y]) dfs(x-1,y, visited);
}

bool connected(vector<vi> &visited) {
  for (vi &v : visited){
    if (count(v.begin(), v.end(), 0)) return false;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> M >> hor >> ver;
  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      vector<vi> visited(N, vi(M));
      dfs(i, j, visited);
      if (!connected(visited)) {
        cout << "NO\n";
        return 0;
      }
    }
  }
  cout << "YES\n";
  return 0;
}
