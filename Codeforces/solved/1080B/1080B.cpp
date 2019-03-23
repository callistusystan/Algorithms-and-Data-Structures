#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll f(ll x) {
  if (x%2) return -(x+1)/2;
  return x/2;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int Q; cin >> Q;
  while (Q--) {
    ll l, r; cin >> l >> r;
    cout << f(r) - f(l-1) << endl;
  }
  return 0;
}

// -1 1 -2 2 -3 3 -4 4