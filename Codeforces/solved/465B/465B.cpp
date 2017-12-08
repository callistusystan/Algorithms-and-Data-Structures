#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  bool home = true;
  int ans = 0;
  for (int i=0;i<N;i++) {
    if (A[i] == 1) {
      if (home || A[i-1] == 1) {
        home = false;
        ans++;
      } else if (A[i-1] == 0) {
        ans += 2;
      }
    }
  }

  cout << ans << endl;
  return 0;
}
