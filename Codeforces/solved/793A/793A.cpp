#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  int mn = A[0]; bool can = true;
  for (int i=0;i<N;i++) {
    mn = min(mn, A[i]);
    can &= A[i]%K == A[0]%K;
  }
  if (can) {
    ll ans = 0;
    for (int i=0;i<N;i++) ans += (A[i]-mn)/K;
    cout << ans << endl;
  } else cout << "-1\n";
  return 0;
}
