#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int MOD = 1e9+7;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<vi> memo(505, vi(505));
  memo[0][0] = 1;
  for (int i=0;i<505;i++)
    for (int j=0;j<505;j++) {
      if (i) memo[i][j] += memo[i-1][j];
      if (j) memo[i][j] += memo[i][j-1];
      memo[i][j] %= MOD;
    }

  int T; cin >> T;
  while (T--) {
    int N,M; cin >> N >> M;
    cout << memo[N][M] << endl;
  }
  return 0;
}
