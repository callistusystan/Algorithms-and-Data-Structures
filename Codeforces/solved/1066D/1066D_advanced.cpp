#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M, K; cin >> N >> M >> K;
  vi A(N);
  vector<ll> ps(N);
  for (int i=0;i<N;i++) {
    cin >> A[i];
    ps[i] = A[i];
    if (i) ps[i] += ps[i-1];
  }
  vector<vi> dp(2e5+5, vi(20));
  for (int i=0;i<N;i++) {
    int j = upper_bound(ps.begin(), ps.end(), (i ? ps[i-1] : 0) + K) - ps.begin();
    j--;
    dp[i][0] = j-i+1;
  }
  for (int k=1;k<20;k++) {
    for (int i=0;i<N;i++) {
      dp[i][k] = dp[i][k-1] + dp[i+dp[i][k-1]][k-1];
    }
  }
  int ans = 1;
  for (int i=0;i<N;i++) {
    int cur = i, res = 0;
    int x = M;
    for (int j=0;j<20;j++) {
      if (x%2) {
        res += dp[cur][j];
        cur += dp[cur][j];
      } 
      x /= 2;     
    }
    ans = max(ans, res);
  }
  cout << ans << endl;
  return 0;
}