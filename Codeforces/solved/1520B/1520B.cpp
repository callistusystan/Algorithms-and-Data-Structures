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
    ll x = 1;
    int ans = 0;
    while (x <= N) {
      if (x*9 < N) ans += 9;
      else ans += N/x;
      x = x*10 + 1;
    }
    cout << ans << '\n';
  }
  return 0;
}
