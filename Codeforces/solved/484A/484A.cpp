#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  while (N--) {
    ll l,r; cin >> l >> r;
    if (__builtin_popcountll(r+1) == 1) cout << r << endl;
    else {
      ll best = l;
      while (l <= r) {
        best = max(best, l);
        ll x = 1;
        while (x <= 1e18) {
          if ((l&x) == 0) {
            l |= x;
            break;
          }
          x <<= 1;
        }
      }
      cout << best << endl;
    }
  }
  return 0;
}
