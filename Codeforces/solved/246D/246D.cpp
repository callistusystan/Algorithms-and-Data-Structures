#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;


int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M; cin >> N >> M;
  vi color(1e5+5), in(1e5+5);;
  vector<set<int>> neighbours(1e5+5);
  for (int i=0;i<N;i++) {
    cin >> color[i];
    in[color[i]] = 1;
  }
  while (M--) {
    int u,v; cin >> u >> v;
    u--; v--;
    if (color[u] == color[v]) continue;
    neighbours[color[u]].insert(color[v]);
    neighbours[color[v]].insert(color[u]);
  }
  int mx = -1;
  for (int i=1;i<=1e5;i++){
    if (!in[i]) continue;
    if (mx == -1 || neighbours[i].size() > neighbours[mx].size()) mx = i;
  }
  cout << mx << endl;
  return 0;
}
