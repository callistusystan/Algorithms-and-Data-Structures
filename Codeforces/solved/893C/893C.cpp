#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, M;
vi A(1e5+5);
vector<vi> adjList(1e5+5);
vector<bool> visited(1e5+5);

int dfs(int u) {
  visited[u] = true;
  int ans = A[u];
  for (int v : adjList[u]) {
    if (!visited[v]) {
      ans = min(ans, dfs(v));
    }
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> M;
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<M;i++) {
    int u,v; cin >> u >> v;
    u--; v--;
    adjList[u].push_back(v);
    adjList[v].push_back(u);
  }
  ll ans = 0;
  for (int i=0;i<N;i++) {
    if (!visited[i]) ans += dfs(i);
  }
  cout << ans << endl;
  return 0;
}
