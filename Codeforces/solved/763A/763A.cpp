#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<vi> adjList(1e5+5);
vi visited(1e5+5), colors(1e5+5);

bool oneColor(int u, int color) {
  visited[u] = 1;
  if (colors[u] != color) return false;
  for (int v : adjList[u]) {
    if (visited[v]) continue;
    if (!oneColor(v, color)) return false;
  }
  return true;
}

bool isRoot(int u) {
  fill(visited.begin(), visited.end(), 0);
  visited[u] = 1;
  for (int v : adjList[u]) {
    if (!oneColor(v, colors[v])) return false;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  for (int i=0;i<N-1;i++) {
    int u,v; cin >> u >> v;
    adjList[u].push_back(v);
    adjList[v].push_back(u);
  }
  for (int i=1;i<=N;i++) cin >> colors[i];
  for (int u=1;u<=N;u++) {
    for (int v : adjList[u]) {
      if (colors[u] != colors[v]) {
        if (isRoot(u)) {
          cout << "YES\n";
          cout << u << endl;
        } else if (isRoot(v)) {
          cout << "YES\n";
          cout << v << endl;
        } else {
          cout << "NO\n";
        }
        return 0;
      }
    }
  }
  cout << "YES\n1\n";
  return 0;
}
