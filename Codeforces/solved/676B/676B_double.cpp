#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, T; cin >> N >> T;
  if (T == 0) {
    cout << "0\n";
    return 0;
  }
  vector<vector<double>> A(N, vector<double>(N));
  A[0][0] = T;
  for (int i=1;i<N;i++) {
    for (int j=0;j<=i;j++) {
      if (j) A[i][j] = max(0.0, (A[i-1][j-1]-1)/2);
      A[i][j] += max(0.0, (A[i-1][j]-1)/2);
    }
  }
  int ans = 0;
  for (int i=0;i<N;i++) for (int j=0;j<=i;j++) ans += A[i][j] + EPS >= 1.0;
  cout << ans << endl;
  return 0;
}
