#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi isRoot(5005, 1), visited(5005);
vector<vi> adjList(5005);

void dfs(int u) {
  visited[u] = 1;
  for (int v : adjList[u])
    if (!visited[v]) dfs(v);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  
  int N,M,S; cin >> N >> M >> S;
  while (M--) {
    int u,v; cin >> u >> v;
    adjList[u].push_back(v);
    isRoot[v] = 0;
  }
  dfs(S);
  int ans = 0;
  for (int i=1;i<=N;i++)
    if (isRoot[i] && !visited[i]) {
      dfs(i);
      ans++;
    }
  for (int i=1;i<=N;i++)
    if (!visited[i]) {
      dfs(i);
      ans++;
    }
  cout << ans << endl;
  return 0;
}
