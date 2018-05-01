#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A,B; cin >> A >> B;
  ll ans = 0;
  while (A && B) {
    if (A > B) swap(A, B);
    ans += B/A;
    B %= A;
  }
  cout << ans << endl;
  return 0;
}
