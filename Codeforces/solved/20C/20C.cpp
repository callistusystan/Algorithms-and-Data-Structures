#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<vector<pair<int, ll>>> adjList(N+5);
  for (int i=0;i<M;i++) {
    int u,v,w; cin >> u >> v >> w;
    adjList[u].push_back({v,w});
    adjList[v].push_back({u,w});
  }

  vector<ll> dist(N+5, -1);
  priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
  vi parent(N+5, -1);
  dist[1] = 0;
  pq.push({0,1});
  while (!pq.empty()) {
    auto top = pq.top(); pq.pop();
    ll d = top.first;
    int cur = top.second;
    if (d > dist[cur]) continue;
    for (auto e : adjList[cur]) {
      int v = e.first; ll w = e.second;
      if (dist[v] == -1 || d+w < dist[v]) {
        parent[v] = cur;
        dist[v] = d+w;
        pq.push({ d+w, v });
      }
    }
  }
  if (dist[N] == -1) cout << -1 << endl;
  else {
    vi ans;
    int cur = N;
    while (cur != -1) {
      ans.push_back(cur);
      cur = parent[cur];
    }
    while (ans.size()) {
      cout << ans.back() << " ";
      ans.pop_back();
    }
    cout << endl;
  }
  return 0;
}
