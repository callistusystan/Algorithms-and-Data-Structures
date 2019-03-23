#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int ans = 0;
vector<vi> adjList(2e5+5);
vi dist(2e5+5, -1), parent(2e5+5);
set<int> good;

void dfs(int u, int p) {
  parent[u] = p;
  dist[u] = dist[p] + 1;
  for (int v : adjList[u]) {
    if (dist[v] == -1) dfs(v, u);
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
  dfs(1, 0);
  priority_queue<pii> pq;
  for (int i=1;i<=N;i++) {
    if (dist[i] <= 2) good.insert(i);
    pq.push({ dist[i], i });
  }
  while (!pq.empty()) {
    pii p = pq.top(); pq.pop();
    int furthest = p.second;
    if (good.count(furthest)) continue;
    int parent_furthest = parent[furthest];
    good.insert(parent_furthest);
    for (int v : adjList[parent_furthest]) good.insert(v);
    ans++;
  }
  cout << ans << endl;
  return 0;
}