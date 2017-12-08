#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int N,S; cin >> N >> S;

    if (1 <= S && S <= 9*N) {
      if (N%2 == 0 && S%2) cout << -1 << endl;
      else {
        string ans;
        for (int i=0;i<N/2;i++) {
          int d = min(9, S/2);
          ans += '0'+d;
          S -= 2*d;
        }
        if (ans[0] == '0') cout << -1 << endl;
        else {
          cout << ans;
          if (N%2 == 1) {
            cout << S;
          }
          reverse(ans.begin(), ans.end());
          cout << ans << endl;
        }
      }
    } else {
      cout << -1 << endl;
    }
  }

  return 0;
}
