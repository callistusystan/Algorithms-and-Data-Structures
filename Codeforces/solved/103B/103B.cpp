#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int sz = 0;
vi visited(105);
vector<vi> adjList(105);

void dfs(int u) {
  visited[u] = 1;
  sz++;
  for (int v : adjList[u])
    if (!visited[v]) dfs(v);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  if (N != M) {
    cout << "NO\n";
    return 0;
  }
  while (M--) {
    int u,v; cin >> u >> v;
    adjList[u].push_back(v);
    adjList[v].push_back(u);
  }
  dfs(1);
  if (sz == N) cout << "FHTAGN!\n";
  else cout << "NO\n";
  return 0;
}
