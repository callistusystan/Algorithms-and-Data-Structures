#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, M;
vector<vector<vi>> adjList(105, vector<vi>(105));

void dfs(int u, int c, vi &visited) {
  visited[u] = 1;
  for (int v : adjList[u][c]) {
    if (!visited[v])
      dfs(v, c, visited);
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> M;
  while (M--) {
    int u, v, c; cin >> u >> v >> c;
    u--; v--;
    adjList[u][c].push_back(v);
    adjList[v][c].push_back(u);
  }
  int Q; cin >> Q;
  while (Q--) {
    int u, v; cin >> u >> v;
    u--; v--;
    int ans = 0;
    for (int i=1;i<=100;i++) {
      vi visited(N);
      dfs(u, i, visited);
      if (visited[v]) ans++;
    }
    cout << ans << endl;
  }
  return 0;
}
