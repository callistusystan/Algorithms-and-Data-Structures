#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, M;
vector<vi> adjList(1e5+5);
vi color(1e5+5, -1), ans[2];

bool dfs(int u, int c) {
  color[u] = c;
  ans[c].push_back(u+1);
  bool res = true;
  for (int v : adjList[u]) {
    if (color[v] == -1) res &= dfs(v, 1-c);
    else if (color[v] == color[u]) return false;
  }
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> M;
  for (int i=0;i<M;i++) {
    int ui, vi; cin >> ui >> vi;
    ui--; vi--;
    adjList[ui].push_back(vi);
    adjList[vi].push_back(ui);
  }
  for (int i=0;i<N;i++) {
    if (color[i] == -1) {
      if (!dfs(i, 0)) {
        cout << -1 << endl;
        return 0;
      }
    }
  }

  cout << ans[0].size() << endl;
  for (int u : ans[0]) cout << u << " ";
  cout << endl;

  cout << ans[1].size() << endl;
  for (int u : ans[1]) cout << u << " ";
  cout << endl;

  return 0;
}
