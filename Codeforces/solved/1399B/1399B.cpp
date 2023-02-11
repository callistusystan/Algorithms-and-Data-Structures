#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    vi A(N), B(N);
    for (int i=0;i<N;i++) cin >> A[i];
    for (int i=0;i<N;i++) cin >> B[i];

    ll a_mn = *min_element(A.begin(), A.end());
    ll b_mn = *min_element(B.begin(), B.end());

    ll ans = 0;
    for (int i=0;i<N;i++) {
      ll diff_a = A[i] - a_mn;
      ll diff_b = B[i] - b_mn;
      ll eat_both = min(diff_a, diff_b);
      ans += eat_both + (diff_a - eat_both) + (diff_b - eat_both);
    }
    cout << ans << endl;
  }
  return 0;
}
