#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int ans = 0;
  int N, M; cin >> N >> M;
  while (1) {
    if (M < N) swap(N, M);
    if (N >= 1 && M >= 2) {
      N -= 1;
      M -= 2;
      ans++;
    } else {
      break;
    }
  }
  cout << ans << endl;

  return 0;
}
