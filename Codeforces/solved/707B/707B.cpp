#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<vector<pii>> adjList(1e5+5);

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M, K; cin >> N >> M >> K;
  for (int i=0;i<M;i++) {
    int u, v, l; cin >> u >> v >> l;
    u--; v--;
    adjList[u].push_back({v, l});
    adjList[v].push_back({u, l});
  }

  vi isStore(1e5+5);
  for (int i=0;i<K;i++) {
    int ai; cin >> ai; ai--;
    isStore[ai] = 1;
  }

  int ans = -1;
  for (int i=0;i<N;i++) {
    if (isStore[i]) {
      for (pii p : adjList[i]) {
        if (!isStore[p.first]) {
          if (ans == -1) ans = p.second;
          ans = min(ans, p.second);
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}
