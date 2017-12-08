#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, D; cin >> N >> D;
  vi A(N), mx(N);
  ll bal = 0;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    bal += A[i];
    mx[i] = bal;
  }
  for (int i=N-2;i>=0;i--) {
    mx[i] = max(mx[i], mx[i+1]);
  }
  if (N == 1) {
    if (A[0] > D) cout << -1;
    else cout << 0;
    cout << endl;
    return 0;
  }
  ll added = 0, ans = 0;
  bal = 0;
  for (int i=0;i<N;i++) {
    bal += A[i];
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
      bal += canAdd;
      added += canAdd;
    }
  }
  cout << ans << endl;
  return 0;
}
