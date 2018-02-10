#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll f(ll n) {
  return n*(n+1)/2;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    ll N; cin >> N;
    ll n3 = (N-1)/3, n5 = (N-1)/5, n15 = (N-1)/15;
    ll ans = 3*f(n3) + 5*f(n5) - 15*f(n15);
    cout << ans << endl;
  }
  return 0;
}
