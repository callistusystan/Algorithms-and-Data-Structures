#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; cin >> N;

  if (N < 6 || N%2) cout << 0;
  else {
    ll ans = N/4;
    if (N%4 == 0) ans--;
    cout << ans;
  }

  cout << endl;

  return 0;
}
