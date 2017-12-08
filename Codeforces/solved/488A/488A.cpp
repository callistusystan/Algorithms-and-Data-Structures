#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

bool isLucky(ll num) {
  num = abs(num);
  while (num > 0) {
    if (num%10 == 8) return true;
    num /= 10;
  }
  return false;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A; cin >> A;
  ll best = 1e9;
  for (ll i=A+1;i<A+100;i++) {
    if (isLucky(i)) {
      best = min(best, i-A);
    }
  }
  cout << best << endl;

  return 0;
}
