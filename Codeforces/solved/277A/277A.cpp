#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<bool> visited(105);
vector<vi> adj(105);

void dfs(int u) {
  visited[u] = true;
  for (int v : adj[u])
    if (!visited[v]) dfs(v);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<set<int>> A(N);
  bool noLang = true;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    if (ai) noLang = false;
    for (int j=0;j<ai;j++) {
      int lij; cin >> lij;
      A[i].insert(lij);
    }
  }

  if (noLang) {
    cout << N << endl;
    return 0;
  }

  for (int i=0;i<N;i++) {
    for (int j=0;j<N;j++) {
      if (i == j) continue;
      for (int l : A[i]) {
        if (A[j].count(l)) {
          adj[i].push_back(j);
          break;
        }
      }
    }
  }

  int nComp = 0;
  for (int i=0;i<N;i++) {
    if (!visited[i]) {
      nComp++;
      dfs(i);
    }
  }
  cout << nComp - 1 << endl;

  return 0;
}
