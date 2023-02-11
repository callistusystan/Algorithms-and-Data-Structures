#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int X, N, M; cin >> X >> N >> M;

    while (N > 0) {
      int xx = X/2 + 10;
      if (xx > X) break;
      X = xx;
      N--;
    }
    X -= M*10;
    if (X <= 0) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
