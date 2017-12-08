#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

vi A(3e4+5);

bool dfs(int u, int d) {
  if (u == d) return true;

  if (A[u]) return dfs(u+A[u], d);
  return false;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, T; cin >> N >> T;

  T--;
  for (int i=0;i<N-1;i++) {
    cin >> A[i];
  }

  if (dfs(0,T)) cout << "YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
