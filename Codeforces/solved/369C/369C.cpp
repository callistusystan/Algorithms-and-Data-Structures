#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<vector<pii>> adjList(1e5+5);
vi visited(1e5+5), target(1e5+5), ans;

int dfs(int u) {
  visited[u] = 1;
  int subtrees = 0;
  for (pii p : adjList[u]) {
    int v = p.first, t = p.second;
    if (!visited[v]) {
      int branches = dfs(v);
      if (branches == 0) {
        if (t) {
          ans.push_back(v);
          subtrees++;
        }
      } else subtrees += branches;
    }
  }
  return subtrees;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  for (int i=0;i<N-1;i++) {
    int u, v, t; cin >> u >> v >> t;
    adjList[u].push_back({v, t-1});
    adjList[v].push_back({u, t-1});
  }
  dfs(1);
  cout << ans.size() << endl;
  if (ans.size()) {
    for (int i : ans) cout << i << " ";
    cout << endl;
  }
  return 0;
}
