#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll C[65][65];

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i=0;i<65;i++) {
    C[i][0] = 1;
    C[i][i] = 1;
    for (int j=1;j<i;j++) C[i][j] = C[i-1][j-1] + C[i-1][j];
  }

  int N, M, T; cin >> N >> M >> T;
  ll ans = 0;
  for (int i=4;i<=N;i++) {
    int j = T-i;
    if (1 <= j && j <= M) ans += C[N][i]*C[M][j];
  }
  cout << ans << endl;
  return 0;
}
