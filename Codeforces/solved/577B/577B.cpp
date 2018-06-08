#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, M; 
vi A(1e6+5);
int memo[1005][1005][2];

int rec(int cur, int mod, bool atLeast1) {
  if (atLeast1 && mod == 0) return 1;
  else if (cur == N) return 0;
  else if (memo[cur][mod][atLeast1] != -1) return memo[cur][mod][atLeast1];
  int res = 0;
  res |= rec(cur+1, (mod+A[cur])%M, true);
  res |= rec(cur+1, mod, atLeast1);
  return memo[cur][mod][atLeast1] = res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i=0;i<1e3+5;i++)
    for (int j=0;j<1e3+5;j++) 
      for (int k=0;k<2;k++) memo[i][j][k] = -1;

  cin >> N >> M;
  for (int i=0;i<N;i++) cin >> A[i];
  if (N <= M) {
    if (rec(0, 0, false)) {
      cout << "YES\n";
      return 0;
    }
  } else {
    cout << "YES\n";
    return 0;
  }
  cout << "NO\n";
  return 0;
}
