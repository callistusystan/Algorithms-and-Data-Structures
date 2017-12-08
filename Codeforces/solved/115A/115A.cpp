#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

vector<vi> adjList(2005);
vector<bool> visited(2005, false);

int dfs(int u) {
  visited[u] = true;
  int ans = 1;
  for (int v : adjList[u]) {
    if (!visited[v]) {
      ans = max(ans, dfs(v) + 1);
    }
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<bool> isManager(N);
  for (int i=0;i<N;i++) {
    int pi; cin >> pi;
    if (pi == -1) isManager[i] = true;
    else {
      adjList[pi-1].push_back(i);
    }
  }

  int ans = 1;
  for (int i=0;i<N;i++) {
    if (!visited[i] && isManager[i]) {
      ans = max(ans, dfs(i));
    }
  }

  cout << ans << endl;

  return 0;
}
