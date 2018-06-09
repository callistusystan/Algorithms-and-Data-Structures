#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll INF = -1;
int N,M,K; 
vi C(105);
vector<vi> P(105, vi(105));
ll memo[105][105][105];

ll rec(int cur, int remain, int prev) {
  if (cur == N && remain == 0) return 0;
  else if (cur == N && remain != 0) return INF;
  else if (memo[cur][remain][prev] != -2) return memo[cur][remain][prev];
  ll best = INF;
  if (C[cur] == 0) {
    for (int i=1;i<=M;i++) {
      ll res = rec(cur+1, i == prev ? remain : remain-1, i);
      if (res == INF) continue;
      if (best == INF || P[cur][i] + res < best) best = P[cur][i] + res;
    }
  } else best = rec(cur+1, C[cur] == prev ? remain : remain-1, C[cur]);
  return memo[cur][remain][prev] = best;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i=0;i<105;i++) for (int j=0;j<105;j++) for (int k=0;k<105;k++) memo[i][j][k] = -2;
  cin >> N >> M >> K;
  for (int i=0;i<N;i++) cin >> C[i];
  for (int i=0;i<N;i++) for (int j=1;j<=M;j++) cin >> P[i][j];
  cout << rec(0, C[0] ? K-1 : K, C[0]) << endl;
  return 0;
}
