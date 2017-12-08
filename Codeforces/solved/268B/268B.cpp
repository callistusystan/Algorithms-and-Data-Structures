#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; cin >> N;

  ll ans = 0;
  for (ll i=1;i<=N;i++) {
    ans += 1 + (N-i)*i;
  }

  cout << ans << endl;

  return 0;
}
