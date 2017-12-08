#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, D; cin >> N >> D;
  vi A(N);
  vector<ll> P(N), mx(N);;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    P[i] = A[i];
    if (i) P[i] += P[i-1];
    mx[i] = P[i];
  }
  if (N == 1) {
    if (A[0] > D) cout << -1;
    else cout << 0;
    cout << endl;
    return 0;
  }
  for (int i=N-2;i >= 0;i--) {
    mx[i] = max(mx[i], mx[i+1]);
  }
  ll added = 0, ans = 0;
  for (int i=0;i<N;i++) {
    ll bal = P[i] + added;
    if (bal > D) {
      cout << -1 << endl;
      return 0;
    }
    if (A[i] == 0 && bal < 0) {
      ll canAdd = D - mx[i] - added;
      if (canAdd < 0 || bal + canAdd < 0) {
        cout << -1 << endl;
        return 0;
      }
      if (canAdd > 0) ans++;
      added += canAdd;
    }
  }
  cout << ans << endl;
  return 0;
}
