#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int MOD = 1e9+7;
int T, K;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> T >> K;

  vi memo(1e5+5);
  memo[0] = 1;
  for (int i=1;i<1e5+5;i++) {
    memo[i] = memo[i-1];
    if (i >= K) memo[i] += memo[i-K];
    memo[i] %= MOD;
  }

  for (int i=1;i<1e5+5;i++) {
    memo[i] += memo[i-1];
    memo[i] %= MOD;
  }

  while (T--) {
    int a, b; cin >> a >> b;

    int res = memo[b] - memo[a-1];
    if (res < 0) res += MOD;
    cout << res << endl;
  }

  return 0;
}
