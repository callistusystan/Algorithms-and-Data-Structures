#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi order, idx(2e5+5), size(2e5+5), visited(2e5+5);
vector<vi> adj(2e5+5);

int dfs(int u) {
  idx[u] = order.size();
  order.push_back(u);
  visited[u] = 1;
  int sz = 1;
  for (int v : adj[u])
    if (!visited[v]) sz += dfs(v);
  return size[u] = sz;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, Q; cin >> N >> Q;
  for (int i=2;i<=N;i++) {
    int p; cin >> p;
    adj[p].push_back(i);
  }
  for (int i=1;i<=N;i++) sort(adj[i].begin(), adj[i].end());
  dfs(1);
  while (Q--) {
    int u, k; cin >> u >> k;
    if (k > size[u]) cout << "-1\n";
    else cout << order[idx[u]+k-1] << '\n';
  }
  return 0;
}
