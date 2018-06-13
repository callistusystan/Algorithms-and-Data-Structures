#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, M, K, id = 1;
int dr[] = {-1,0,1,0}, dc[] = {0,1,0,-1};
vector<string> A(55);
vector<vi> visited(55, vi(55));
vector<pii> components;

int dfs(int x, int y, bool &isLake) {
  visited[x][y] = id;
  int ans = 1;
  for (int i=0;i<4;i++) {
    int x2=x+dr[i], y2=y+dc[i];
    if (x2 < 0 || x2 >= N || y2 < 0 || y2 >= M) isLake = false;
    else if (A[x2][y2] == '.' && !visited[x2][y2]) ans += dfs(x2, y2, isLake);
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> M >> K;
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<N;i++)
    for (int j=0;j<M;j++) {
      if (A[i][j] == '.' && !visited[i][j]) {
        bool isLake = true;
        int res = dfs(i, j, isLake);
        if (isLake) components.push_back({res, id});
        id++;
      }
    }
  sort(components.begin(), components.end());
  int ans = 0;
  set<int> bad;
  for (int i=0;i<(int)components.size()-K;i++) {
    ans += components[i].first;
    bad.insert(components[i].second);
  }
  for (int i=0;i<N;i++)
    for (int j=0;j<M;j++) 
      if (bad.count(visited[i][j])) A[i][j] = '*';
  cout << ans << endl;
  for (int i=0;i<N;i++) cout << A[i] << endl;
  return 0;
}
