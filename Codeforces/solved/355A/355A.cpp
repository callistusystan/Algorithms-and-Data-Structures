#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int K,D; cin >> K >> D;
  if (D == 0) {
    if (K == 1) cout << "0\n";
    else cout << "No solution\n";
  } else {
    string ans(K, '0');
    ans[0] = '0'+D;
    cout << ans << endl;
  }
  return 0;
}
