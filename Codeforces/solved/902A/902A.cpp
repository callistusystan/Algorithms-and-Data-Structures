#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, M;
vi visited(105);
vector<vi> adjList(105);

void dfs(int u) {
  visited[u] = 1;
  for (int v : adjList[u]) {
    if (!visited[v]) dfs(v);
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> M;
  for (int i=0;i<N;i++) {
    int ai, bi; cin >> ai >> bi;
    for (int j=ai+1;j<=bi;j++) {
      adjList[ai].push_back(j);
    }
  }
  dfs(0);
  if (visited[M]) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
