#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi visited(1e5+5);
vector<vi> adjList(1e5+5);
double dfs(int u, int d) {
  visited[u] = 1;
  double res = 0, denom = 0;
  for (int v : adjList[u]) {
    if (!visited[v]) {
      res += dfs(v, d+1);
      denom++;
    }
  }
  if (denom == 0) return d;
  return res/denom;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  for (int i=0;i<N-1;i++) {
    int u,v; cin >> u >> v;
    u--; v--;
    adjList[u].push_back(v);
    adjList[v].push_back(u);
  }
  cout << fixed << setprecision(15) << dfs(0,0) << endl;
  return 0;
}
