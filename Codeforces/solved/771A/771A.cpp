#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, ll> pii;

vector<bool> visited(2e5);
vector<vi> adjList(2e5);

pii dfs(int u) {
  visited[u] = true;
  int nV = 1;
  ll nE = 0;
  for (int v : adjList[u]) {
    nE++;
    if (!visited[v]) {
      auto res = dfs(v);
      nV += res.first;
      nE += res.second;
    }
  }
  return { nV, nE };
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M; cin >> N >> M;
  for (int i=0;i<M;i++) {
    int u,v; cin >> u >> v;
    u--; v--;
    adjList[u].push_back(v);
    adjList[v].push_back(u);
  }
  bool can = true;
  for (int i=0;i<N;i++) {
    if (!visited[i]) {
      auto res = dfs(i);
      ll nV, nE;
      nV = res.first;
      nE = res.second;
      if ((nV)*(nV-1) != nE) can = false;
    }
  }

  if (can) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
