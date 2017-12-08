#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi dp(1e6+5, 1e6+5);

  for (int i=1;i<=5;i++) dp[i] = 1;

  int X; cin >> X;
  for (int i=6;i<=X;i++) {
    for (int j=1;j<=5;j++) {
      dp[i] = min(dp[i], 1+dp[i-j]);
    }
  }

  cout << dp[X] << endl;

  return 0;
}
