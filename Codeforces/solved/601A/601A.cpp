#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<vi> adjList1(500), adjList2(500);

vi bfs(vector<vi> &adjList) {
  vi dist(500, -1);
  queue<int> q;
  q.push(0);
  dist[0] = 0;
  while (!q.empty()) {
    int u = q.front(); q.pop();
    for (int v: adjList[u]) {
      if (dist[v] == -1) {
        dist[v] = dist[u] + 1;
        q.push(v);
      }
    }
  }
  return dist;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  set<pii> seen;
  for (int i=0;i<M;i++) {
    int u,v; cin >> u >> v;
    u--; v--;
    adjList1[u].push_back(v);
    adjList1[v].push_back(u);
    seen.insert({min(u,v), max(u,v)});
  }
  for (int i=0;i<N-1;i++) {
    for (int j=i+1;j<N;j++) {
      if (!seen.count({i,j})) {
        adjList2[i].push_back(j);
        adjList2[j].push_back(i);
      }
    }
  }

  vi dist1 = bfs(adjList1), dist2 = bfs(adjList2);
  if (dist1[N-1] == -1 || dist2[N-1] == -1) {
    cout << "-1\n";
    return 0;
  }
  for (int i=1;i<N-1;i++) {
    if (dist1[i] == dist2[i]) {
      cout << "-1\n";
      return 0;
    }
  }
  cout << max(dist1[N-1], dist2[N-1]) << endl;
  return 0;
}
