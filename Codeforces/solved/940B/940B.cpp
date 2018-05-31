#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, K, A, B; cin >> N >> K >> A >> B;
  if (K == 1) {
    cout << (N-1)*A << endl;
    return 0;
  }
  ll ans = 0;
  while (N > 1) {
    if (N < K) {
      ans += (N-1)*A;
      N = 1;
    } else {
      ans += (N%K)*A;
      N -= N%K;
      ans += min((N-N/K)*A, B);
      N /= K;
    }
  }
  cout << ans << endl;
  return 0;
}
