#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, A, B, C; cin >> N >> A >> B >> C;
  int K = ((N+3)/4)*4 - N;
  vector<ll> cost(K+20);
  cost[0] = 0;
  for (int i=1;i<K+20;i++) {
    cost[i] = A + cost[i-1];
    if (i >= 2) cost[i] = min(cost[i], B+cost[i-2]);
    if (i >= 3) cost[i] = min(cost[i], C+cost[i-3]);
  }
  ll ans = cost[K];
  for (int i=K;i<K+20;i+=4) {
    ans = min(ans, cost[i]);
  }
  cout << ans << endl;

  return 0;
}
