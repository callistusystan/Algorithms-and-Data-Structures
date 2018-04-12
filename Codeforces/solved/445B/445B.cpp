#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<vi> adjList(100);
vi visited(100);

int dfs(int u) {
  visited[u] = 1;
  int ans = 1;
  for (int v : adjList[u]) {
    if (!visited[v]) ans += dfs(v);
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M; cin >> N >> M ;
  for (int i=0;i<M;i++) {
    int u,v; cin >> u >> v;
    adjList[u].push_back(v);
    adjList[v].push_back(u);
  }
  ll ans = 1;
  for (int i=1;i<=N;i++) {
    if (!visited[i]) ans *= 1LL<<(dfs(i)-1);
  }
  cout << ans << endl;
  return 0;
}
