#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    map<int, int> cnt;
    int mx = 1;
    for (int i=0;i<N;i++) {
      int x; cin >> x;
      cnt[x]++;
      mx = max(mx, cnt[x]);
    }
    if (N == 1) cout << "0\n";
    else {
      int n_unique = cnt.size();
      // 1 2 3 3 (3 v 2)
      if (n_unique > mx) cout << mx << endl;
      // 1 2 2  (2 v 2)
      else if (n_unique == mx) cout << mx-1 << endl;
      // 1 1 1  (1 v 3)
      else cout << n_unique << endl;
    }
  }
  return 0;
}
