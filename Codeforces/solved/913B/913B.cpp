#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<vi> adjList(1005);

bool dfs(int u) {
  int leaves = 0;
  bool res = true;
  for (int v : adjList[u]) {
    if (adjList[v].size() == 0) leaves++;
    else res &= dfs(v);
  }
  return res && leaves >= 3;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  for (int i=2;i<=N;i++) {
    int p; cin >> p;
    adjList[p].push_back(i);
  }
  if (dfs(1)) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}
