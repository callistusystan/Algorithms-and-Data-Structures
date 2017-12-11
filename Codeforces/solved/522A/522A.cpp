#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N;
map<string, vector<string>> adjList;
map<string, bool> visited;

string upper(string s) {
  for (int i=0;i<(int)s.size();i++) {
    s[i] = toupper(s[i]);
  }
  return s;
}

int dfs(string u) {
  visited[u] = true;
  int ans = 1;
  for (string v : adjList[u]) {
    if (!visited[v]) ans = max(ans, 1+dfs(v));
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N;
  for (int i=0;i<N;i++) {
    string v,u; cin >> v >> u >> u;
    adjList[upper(u)].push_back(upper(v));
  }
  cout << dfs("POLYCARP") << endl;
  return 0;
}
