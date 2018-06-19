#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  while (N--) {
    int A, B; cin >> A >> B;
    ll x = (ll)A*B;
    ll lo = -1, hi = 1e6+1;
    while (lo != hi-1) {
      ll mid = (lo+hi)/2;
      if (mid*mid*mid < x) lo = mid;
      else hi = mid;
    }
    if (hi*hi*hi == x && A%hi == 0 && B%hi == 0) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}
