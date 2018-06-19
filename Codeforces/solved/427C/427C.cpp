#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, MOD = 1e9+7, id = 1; 
vi A(1e5+5), dfs_lo(1e5+5), dfs_num(1e5+5), S, in_stack(1e5+5);
vector<vi> adjList(1e5+5), components(1e5+5);

void dfs(int u) {
  dfs_lo[u] = dfs_num[u] = id++;
  in_stack[u] = 1;
  S.push_back(u);
  for (int v : adjList[u]) {
    if (!dfs_num[v]) dfs(v);
    if (in_stack[v]) dfs_lo[u] = min(dfs_lo[u], dfs_lo[v]);
  }
  if (dfs_lo[u] == dfs_num[u]) {
    int v;
    do {
      v = S.back(); S.pop_back();
      in_stack[v] = 0;
      components[u].push_back(v);
    } while (u != v);
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N;
  for (int i=1;i<=N;i++) cin >> A[i];
  int M; cin >> M;
  while (M--) {
    int u,v; cin >> u >> v;
    adjList[u].push_back(v);
  }
  for (int i=1;i<=N;i++)
    if (!dfs_num[i]) dfs(i);
  ll ans = 0, nWays = 1;
  for (int i=1;i<=N;i++) {
    if (components[i].size()) {
      int mn = INT_MAX, n_mn = 0;
      for (int u : components[i]) {
        if (A[u] < mn) n_mn = 1, mn = A[u];
        else if (A[u] == mn) n_mn++;
      }
      ans += mn;
      nWays = ((ll)nWays * n_mn)%MOD;
    }
  }
  cout << ans << " " << nWays << endl;
  return 0;
}
