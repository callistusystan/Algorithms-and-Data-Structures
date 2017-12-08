#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  ll ans = 0;
  int prev = -1;
  for (int i=0;i<N;i++) {
    ll ai; cin >> ai;
    if (ai) {
      if (prev == -1) ans = 1;
      else {
        ans *= (i-prev);
      }
      prev = i;
    }
  }

  cout << ans << endl;
  return 0;
}
