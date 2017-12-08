#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll MOD = 1e9+7;
vector<vi> memo(2, vi(4));

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  memo[0][0] = 1;
  int cur = 0;
  for (int i=1;i<=N;i++) {
    cur = 1-cur;
    for (int j=0;j<4;j++) {
      ll ans = 0;
      for (int k=0;k<4;k++) {
        if (j == k) continue;
        ans += memo[1-cur][k];
        ans %= MOD;
      }
      memo[cur][j] = ans;
    }
  }
  cout << memo[N%2][0] << endl;
  return 0;
}
