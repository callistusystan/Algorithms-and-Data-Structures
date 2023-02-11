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
    int n_even = 0, n_odd = 0, sum = 0;
    for (int i=0;i<N;i++) {
      int x; cin >> x;
      sum += x;
      if (x%2) n_odd++;
      else n_even++;
    }
    if (sum%2 || (n_even > 0 && n_odd > 0)) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
