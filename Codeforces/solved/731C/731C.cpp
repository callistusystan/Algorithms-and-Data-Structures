#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi color(2e5+5), visited(2e5+5);
vector<vi> adjList(2e5+5);

void dfs(int u, vi &vertices) {
  visited[u] = 1;
  vertices.push_back(u);
  for (int v : adjList[u]) if (!visited[v]) dfs(v, vertices);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M,K; cin >> N >> M >> K;
  for (int i=0;i<N;i++) cin >> color[i];
  while (M--) {
    int l,r; cin >> l >> r;
    l--; r--;
    adjList[l].push_back(r);
    adjList[r].push_back(l);
  }
  int ans = 0;
  for (int i=0;i<N;i++) {
    if (!visited[i]) {
      vi vertices;
      dfs(i, vertices);
      map<int, int> cnt;
      for (int v : vertices) cnt[color[v]]++;
      int best = INT_MAX;
      for (auto p : cnt) best = min(best, (int)vertices.size()-p.second);
      ans += best;
    }
  }
  cout << ans << endl;
  return 0;
}
