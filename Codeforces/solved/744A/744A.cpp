#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int id = 1;
vi isGov(1005), isCompGov(1005), visited(1005);
vector<vi> adjList(1005), components(1005);

void dfs(int u) {
  visited[u] = 1;
  components[id].push_back(u);
  if (isGov[u]) isCompGov[id] = 1;
  for (int v : adjList[u])
    if (!visited[v]) dfs(v);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M, K; cin >> N >> M >> K;
  while (K--) {
    int x; cin >> x;
    isGov[x] = 1;
  }
  while (M--) {
    int u,v; cin >> u >> v;
    adjList[u].push_back(v);
    adjList[v].push_back(u);
  }
  ll ans = 0;
  for (int i=1;i<=N;i++) {
    if (!visited[i]) {
      dfs(i);
      ll sz = components[id].size();
      int nEdges = 0;
      for (int u : components[id]) nEdges += adjList[u].size();
      nEdges /= 2;
      ans += sz*(sz-1)/2 - nEdges;
      id++;
    }
  }
  ll curSize = 0;
  for (int i=1;i<=id;i++) if (isCompGov[i]) curSize = max(curSize, (ll)components[i].size());
  for (int i=1;i<id;i++) {
    if (!isCompGov[i]) {
      ans += curSize*components[i].size();
      curSize += components[i].size();
    }
  }
  cout << ans << endl;
  return 0;
}
