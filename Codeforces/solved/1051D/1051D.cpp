#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int MOD = 998244353;
int transition[4][4] = {
  { 0, 1, 1, 1 },
  { 0, 0, 2, 0 },
  { 0, 2, 0, 0 },
  { 1, 1, 1, 0 }
};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  vector<vector<vi>> dp(2, vector<vi>(4, vi(2005)));
  // dp[cur][state][components]
  dp[0][0][1] = 1; dp[0][3][1] = 1;
  dp[0][1][2] = 1; dp[0][2][2] = 1;
  for (int i=1;i<N;i++) {
    int cur = i%2; int prev = 1-cur;
    for (int j=0;j<4;j++) for (int k=0;k<2005;k++) dp[cur][j][k] = 0;
    for (int j=0;j<4;j++) {
      for (int k=1;k<=K;k++) {
        if (dp[prev][j][k] == 0) continue;
        for (int l=0;l<4;l++) {
          if (k+transition[j][l] > K) continue;
          dp[cur][l][k+transition[j][l]] += dp[prev][j][k];
          dp[cur][l][k+transition[j][l]] %= MOD;
        }
      }
    }
  }
  int ans = 0;
  for (int i=0;i<4;i++) ans = (ans + dp[(N-1)%2][i][K])%MOD;
  cout << ans << endl;
  return 0;
}
