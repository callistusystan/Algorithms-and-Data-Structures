#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int A, B; cin >> A >> B;
    int ans = 2;
    if (A == B) ans = 0;
    else if (A < B && (B-A)%2) ans = 1;
    else if (A > B && (B-A)%2 == 0) ans = 1;
    cout << ans << endl;
  }
  return 0;
}
