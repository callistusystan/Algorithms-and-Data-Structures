#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int UNVISITED = 0, EXPLORED = 2, VISITED = 1;
string ts;
vi visited(26);
vector<vi> adjList(26, vi(26));

bool dfs(int u) {
  bool res = true;
  visited[u] = EXPLORED;
  for (int v=0;v<26;v++) {
    if (!adjList[u][v]) continue;
    if (visited[v] == UNVISITED) {
      res &= dfs(v);
    } else if (visited[v] == EXPLORED) {
      return false;
    }
  }
  visited[u] = VISITED;
  ts += 'a'+u;
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<string> A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<N-1;i++) {
    for (int j=i+1;j<N;j++) {
      bool equal = true;
      for (int k=0;k<(int)min(A[i].size(), A[j].size());k++) {
        if (A[i][k] != A[j][k]) {
          equal = false;
          adjList[A[i][k]-'a'][A[j][k]-'a'] = 1;
          break;
        }
      }
      if (equal && A[i].size() > A[j].size()) {
        cout << "Impossible\n";
        return 0;
      }
    }
  }
  for (int i=0;i<26;i++) {
    if (visited[i] == UNVISITED) {
      if (!dfs(i)) {
        cout << "Impossible\n";
        return 0;
      }
    }
  }
  reverse(ts.begin(), ts.end());
  for (char c : ts) cout << c;
  cout << endl;
  return 0;
}
