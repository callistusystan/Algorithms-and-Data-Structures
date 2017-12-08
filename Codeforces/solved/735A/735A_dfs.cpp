#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int N, K;
string S;
vector<bool> visited(105);

bool dfs(int u) {
  visited[u] = true;
  if (S[u] == 'T') return true;
  if (S[u] == '#') return false;

  bool res = false;
  if (u-K >= 0 && !visited[u-K]) res |= dfs(u-K);
  if (u+K < N && !visited[u+K]) res |= dfs(u+K);

  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N >> K >> S;

  int start = S.find('G');

  if (dfs(start)) cout << "YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
