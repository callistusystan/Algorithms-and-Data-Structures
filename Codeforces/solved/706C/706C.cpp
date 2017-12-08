#include <bits/stdc++.h>
using namespace std;

#define SZ(x) (int)x.size()

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll INF = 1e18;
int N;
vi A(1e5+5);
vector<vector<string>> S(1e5+5, vector<string>(2));
vector<vector<ll>> memo(1e5+5, vector<ll>(2, -1));

ll rec(int id, int cur) {
  // cout << id << " " << cur << endl;
  if (id == N-1) return 0;
  if (memo[id][cur] != -1) return memo[id][cur];
  ll ans = INF;
  for (int i=0;i<2;i++) {
    if (S[id+1][i] >= S[id][cur]) {
      ll res = rec(id+1, i);
      if (res != INF)
        ans = min(ans, res + (i ? A[id+1] : 0LL));
    }
  }
  return memo[id][cur] = ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N;
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<N;i++) {
    cin >> S[i][0];
    S[i][1] = S[i][0];
    reverse(S[i][1].begin(), S[i][1].end());
  }

  ll best = min(rec(0,0), A[0]+rec(0,1));
  if (best == INF) cout << -1 << endl;
  else cout << best << endl;
  return 0;
}
