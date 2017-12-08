#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, K, T; cin >> N >> K >> T;
  ll ans = min(N, T);
  if (T > K) {
    ans -= (T-K);
  }
  cout << ans << endl;
  return 0;
}
