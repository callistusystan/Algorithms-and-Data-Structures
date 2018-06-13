#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

// memo[writtenLines][bugs]
int memo[505][505]; 

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M, B, MOD;
  cin >> N >> M >> B >> MOD;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  memo[0][0] = 1%MOD;
  for (int i=0;i<N;i++) {
    // do not need to handle 
    // (writtenLines, bugs) -> (writtenLines, bugs)
    for (int j=0;j<M;j++) {
      for (int k=0;k+A[i]<=B;k++) {
        memo[j+1][k+A[i]] += memo[j][k];
        memo[j+1][k+A[i]]%= MOD;
      }
    }
  }
  int ans = 0;
  for (int i=0;i<=B;i++) ans = (ans+memo[M][i])%MOD;
  cout << ans << endl;
  return 0;
}
