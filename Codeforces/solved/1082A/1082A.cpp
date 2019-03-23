#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int N, X, Y, D; cin >> N >> X >> Y >> D;
    X--; Y--;
    if (abs(Y-X)%D == 0) {
      cout << abs(Y-X)/D << endl;
    } else {
      int goStart = (X+D-1)/D, goEnd = (N-1-X+D-1)/D;
      if (Y%D == 0 && (N-1-Y)%D == 0) cout << min(goStart+Y/D, goEnd+(N-1-Y)/D) << endl;
      else if (Y%D == 0) cout << goStart+Y/D << endl;
      else if ((N-1-Y)%D == 0) cout << goEnd+(N-1-Y)/D << endl;
      else cout << "-1\n";
    }
  }
  return 0;
}
