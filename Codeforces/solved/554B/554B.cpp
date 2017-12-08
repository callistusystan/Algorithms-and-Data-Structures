#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<string> A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  int ans = 0;
  for (int i=0;i<N;i++) {
    int nOnes = 0;
    for (int j=0;j<N;j++) {
      if (A[i][j] == '1') nOnes++;
    }
    if (nOnes == N) ans++;
  }
  for (int r=0;r<N;r++) {
    int res = 0;
    for (int i=0;i<N;i++) {
      int nOnes = 0;
      for (int j=0;j<N;j++) {
        if (A[r][j] == '0') {
          if (A[i][j] == '0') nOnes++;
        } else {
          if (A[i][j] == '1') nOnes++;
        }
      }
      if (nOnes == N) res++;

      ans = max(ans, res);
    }
  }
  cout << ans << endl;

  return 0;
}
