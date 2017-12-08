#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi visited(105);
vector<vi> adj(105);

void dfs(int u) {
  visited[u] = true;
  for (int v : adj[u]) {
    if (!visited[v]) dfs(v);
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<pii> A(N);
  for (int i=0;i<N;i++)
    cin >> A[i].first >> A[i].second;

  for (int i=0;i<N;i++) {
    for (int j=0;j<N;j++) {
      if (i == j) continue;
      if (A[i].first == A[j].first || A[i].second == A[j].second)
        adj[i].push_back(j);
    }
  }

  int nComponents = 0;
  for (int i=0;i<N;i++) {
    if (!visited[i]) {
      nComponents++;
      dfs(i);
    }
  }
  cout << nComponents-1 << endl;
  return 0;
}
