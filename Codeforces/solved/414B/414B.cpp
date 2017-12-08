#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll MOD = 1e9+7;
int N, K;
vector<vector<ll>> memo(2005, vector<ll>(2005, -1));

ll rec(int K, ll prev) {
  if (K == 0) return 1;
  if (memo[K][prev] != -1) return memo[K][prev];

  ll ans = 0;
  for (int i=prev;i<=N;i+=prev) {
    if (i%prev) continue;
    ans += rec(K-1, i);
    ans %= MOD;
  }
  return memo[K][prev] = ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> K;
  cout << rec(K, 1) << endl;

  return 0;
}
