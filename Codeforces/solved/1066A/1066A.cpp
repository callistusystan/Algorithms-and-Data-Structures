#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int L, V, li, ri; cin >> L >> V >> li >> ri;
    int ans = L/V - ri/V + (li-1)/V;
    cout << ans << endl;
  }
  return 0;
}
