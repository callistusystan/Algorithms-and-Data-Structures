#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  vi A(N+1), T(N+1);
  for (int i=1;i<=N;i++) cin >> A[i];
  for (int i=1;i<=N;i++) cin >> T[i];
  vector<ll> ps_normal(N+1), ps_awake(N+1);
  for (int i=1;i<=N;i++) {
    if (T[i] == 1) ps_normal[i] = A[i];
    ps_awake[i] = A[i];

    ps_normal[i] += ps_normal[i-1];
    ps_awake[i] += ps_awake[i-1];
  }
  ll ans = 0;
  for (int i=1;i+K-1<=N;i++) {
    ans = max(ans, ps_normal[i-1] + ps_awake[i+K-1] - ps_awake[i-1] + ps_normal[N] - ps_normal[i+K-1]);
  }
  cout << ans << endl;
  return 0;
}
