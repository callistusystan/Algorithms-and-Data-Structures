#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

ll MOD = 1e9+7;
ll N, K, D;
ll memo[105][2];

ll rec(int remain, bool atLeastD) {
  if (remain < 0) return 0;
  if (remain == 0 && atLeastD) return 1;
  if (remain == 0 && !atLeastD) return 0;
  if (memo[remain][atLeastD] != -1) return memo[remain][atLeastD];

  ll res = 0;
  for (int i=1;i<=K;i++) {
    res += rec(remain-i, (atLeastD || (i >= D)));
    res %= MOD;
  }

  return memo[remain][atLeastD] = res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i=0;i<105;i++)
    for (int j=0;j<2;j++)
      memo[i][j] = -1;

  cin >> N >> K >> D;

  cout << rec(N, 0) << endl;

  return 0;
}
