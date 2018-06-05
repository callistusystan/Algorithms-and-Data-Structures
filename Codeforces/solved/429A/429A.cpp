#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N; 
vi init(1e5+5), goal(1e5+5), visited(1e5+5), ans;
vector<vi> adjList(1e5+5);

void dfs(int u, int color, vector<bool> flip) {
  visited[u] = 1;
  if ((init[u]^flip[color]) != goal[u]) {
    ans.push_back(u);
    flip[color] = !flip[color];
  }
  for (int v : adjList[u]) {
    if (!visited[v]) dfs(v, 1-color, flip);
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N;
  for (int i=0;i<N-1;i++) {
    int u,v; cin >> u >> v;
    adjList[u].push_back(v);
    adjList[v].push_back(u);
  }
  for (int i=1;i<=N;i++) cin >> init[i];
  for (int i=1;i<=N;i++) cin >> goal[i];
  vector<bool> flip = { 0, 0 };
  dfs(1, 0, flip);
  cout << ans.size() << endl;
  for (int x : ans) cout << x << endl;
  return 0;
}
