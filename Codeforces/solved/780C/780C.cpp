#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, ans = 1;
vector<vi> adjList(2e5+5);
vi color(2e5+5, -1);

void dfs(int u, int c, int c_p) {
  color[u] = c;
  ans = max(ans, c);
  int nextC = 1;
  for (int v : adjList[u]) {
    if (color[v] == -1) {
      while (nextC == c || nextC == c_p) nextC++;
      dfs(v, nextC, c);
      nextC++;
    }
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N;
  for (int i=0;i<N-1;i++) {
    int u,v; cin >> u >> v;
    u--; v--;
    adjList[u].push_back(v);
    adjList[v].push_back(u);
  }
  dfs(0, 1, -1);
  cout << ans << endl;
  for (int i=0;i<N;i++) cout << color[i] << " ";
  cout << endl;
  return 0;
}
