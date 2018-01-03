#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, M, K;
vi A(5005);
vector<ll> P(5005);
vector<vector<ll>> memo(5005, vector<ll>(5005, -1));

ll rec(int id, int remain) {
  if (id > N || remain < 0) return -2;
  else if (id == N && remain == 0) return 0;
  else if (id == N && remain != 0) return -2;
  else if (memo[id][remain] != -1) return memo[id][remain];
  ll ans = rec(id+1, remain);
  ll res = rec(id+M, remain-1);
  if (res != -2) {
    ll val = P[id+M-1] - (id ? P[id-1] : 0);
    ans = max(ans, val+res);
  }
  return memo[id][remain] = ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> M >> K;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    P[i] = A[i];
    if (i) P[i] += P[i-1];
  }
  cout << rec(0, K) << endl;
  return 0;
}
