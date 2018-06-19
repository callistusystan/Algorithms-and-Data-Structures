#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll MOD = 1e9+7;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A, B; cin >> A >> B;
  ll sum = 0;
  for (ll k=1;k<=A;k++) {
    ll sum_m = (B*(B-1)/2)%MOD;
    ll sum_x = (((k*B)%MOD + 1)*sum_m)%MOD;
    sum = (sum + sum_x)%MOD;
  }
  cout << sum << endl;
  return 0;
}
