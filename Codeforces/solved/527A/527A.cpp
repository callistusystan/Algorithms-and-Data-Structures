#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A,B; cin >> A>> B;
  ll ans = 0;

  while (A > 0 && B > 0) {
    ans += A/B;
    A %= B;
    if (B > A) swap(A,B);
  }

  cout << ans << endl;

  return 0;
}
