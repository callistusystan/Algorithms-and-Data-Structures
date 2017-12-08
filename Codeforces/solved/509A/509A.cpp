#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >>N;

  vector<vector<ll>> memo(N, vector<ll>(N, 1));

  for (int i=1;i<N;i++) {
    for (int j=1;j<N;j++) {
      memo[i][j] = memo[i-1][j] +memo[i][j-1];
    }
  }

  cout << memo[N-1][N-1] << endl;

  return 0;
}
