#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi visited(2e5+5);
vector<vi> adjList(2e5+5);

void dfs(int u, bool &res) {
  visited[u] = 1;
  res &= adjList[u].size() == 2;
  for (int v : adjList[u])
    if (!visited[v]) dfs(v, res);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  while (M--) {
    int u, v; cin >> u >> v;
    adjList[u].push_back(v);
    adjList[v].push_back(u);
  }
  int ans = 0;
  for (int i=1;i<2e5+5;i++) {
    if (!visited[i]) {
      bool res = true;
      dfs(i, res);
      ans += res;
    }
  }
  cout << ans << endl;
  return 0;
}