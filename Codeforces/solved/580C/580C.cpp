#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int N, M;
vi hasCat(1e5+5), visited(1e5+5);
vector<vi> adjList(1e5+5);

int dfs(int u, int seen) {
  visited[u] = 1;
  if (seen + hasCat[u] > M) return 0;

  if (!hasCat[u]) seen = 0;
  int ans = 0, nChildren = 0;
  for (int v : adjList[u]) {
    if (!visited[v]) {
      nChildren++;
      ans += dfs(v, seen + hasCat[u]);
    }
  }
  if (nChildren == 0) return 1;
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> M;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    hasCat[i] = ai;
  }

  for (int i=0;i<N-1;i++) {
    int u,v; cin >> u >> v;
    u--; v--;
    adjList[u].push_back(v);
    adjList[v].push_back(u);
  }

  cout << dfs(0, 0) << endl;

  return 0;
}
