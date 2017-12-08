#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll MOD = 1e9+7;
vector<vi> memo(1e7+5, vi(4, -1));

int rec(int remain, int cur) {
  if (remain == 0) {
    if (cur == 0) return 1;
    else return 0;
  }
  if (memo[remain][cur] != -1) return memo[remain][cur];

  ll ans = 0;
  for (int i=0;i<4;i++) {
    if (i == cur) continue;
    ans += rec(remain-1, i);
    ans %= MOD;
  }
  return memo[remain][cur] = ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  cout << rec(N, 0) << endl;
  return 0;
}
