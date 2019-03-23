#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll MOD = 998244353;

void init(string &s, int sz) {
  reverse(s.begin(), s.end());
  while ((int)s.size() < sz) s += '0';
  reverse(s.begin(), s.end());
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  string A, B; cin >> A >> B;
  init(A, max(N, M)); init(B, max(N, M));
  N = M = max(N, M);
  vi ps(N);
  for (int i=0;i<N;i++) {
    ps[i] = B[i] - '0';
    if (i) ps[i] += ps[i-1];
  }
  ll ans = 0, cur = 1;
  for (int i=0;i<N;i++) {
    if (A[N-1-i] == '1') {
      ans = (ans + (ll)ps[M-1-i]*cur)%MOD;
    }
    cur = (cur*2)%MOD;
  }
  cout << ans << endl;
  return 0;
}