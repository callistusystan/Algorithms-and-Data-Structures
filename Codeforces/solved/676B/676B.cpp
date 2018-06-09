#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, T; cin >> N >> T;
  vector<vi> A(N, vi(N));
  A[0][0] = T;
  int ans = 0;
  for (int i=0;i<N;i++) {
    for (int j=0;j<=i;j++) {
      ans += A[i][j] >= 1<<i;
      int p = A[i][j] - min(A[i][j], 1<<i);
      if (i+1 < N) {
        A[i+1][j] += p;
        A[i+1][j+1] += p;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
