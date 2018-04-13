#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<vi> adjList(N);
  vi target(N), color(N);
  for (int i=1;i<N;i++) {
    int u; cin >> u;
    u--;
    adjList[u].push_back(i);
  }
  for (int i=0;i<N;i++) cin >> target[i];
  queue<int> q;
  q.push(0);
  int ans = 0;
  while (!q.empty()) {
    int u = q.front(); q.pop();
    if (color[u] != target[u]) {
      color[u] = target[u];
      ans++;
    }
    for (int v : adjList[u]) {
      if (!color[v]) {
        q.push(v);
        color[v] = color[u];
      }
    }
  }
  cout << ans << endl;
  return 0;
}
