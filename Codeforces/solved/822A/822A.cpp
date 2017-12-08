#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A,B; cin >> A >> B;
  if (B < A) swap (A,B);

  ll ans = 1;
  for (int i=2;i<=A;i++) {
    ans *= i;
  }

  cout << ans << endl;

  return 0;
}
