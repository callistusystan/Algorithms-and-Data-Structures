#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int ans = 0;
vector<vi> adjList(2e5+5);
vi visited(2e5+5), connectedTo1(2e5+5), flag(2e5+5);

void dfs(int u) {
  visited[u] = 1;
  for (int v : adjList[u]) {
    if (!visited[v]) dfs(v);
    if (!flag[v] && !connectedTo1[u]) {
      ans++;
      flag[u] = connectedTo1[u] = 1;
      for (int x : adjList[u]) flag[x] = 1;
    }
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  for (int i=0;i<N-1;i++) {
    int u, v; cin >> u >> v;
    adjList[u].push_back(v);
    adjList[v].push_back(u);
  }
  for (int u : adjList[1]) {
    connectedTo1[u] = 1;
    flag[u] = 1;
    for (int v : adjList[u])
      flag[v] = 1;
  }
  dfs(1);
  cout << ans << endl;
  return 0;
}