#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  ll ans = -2e18;
  vi A(N), B(M);
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<M;i++) cin >> B[i];
  for (int i=0;i<N;i++) {
    ll res = -2e18;
    for (int j=0;j<N;j++) {
      if (i == j) continue;
      for (int k=0;k<M;k++) {
        if (res == -2e18) res = (ll)A[j]*B[k];
        res = max(res, (ll)A[j]*B[k]);
      }
    }
    if (ans == -2e18) ans = res;
    ans = min(ans, res);
  }
  cout << ans << endl;
  return 0;
}
