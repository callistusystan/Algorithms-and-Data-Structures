#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int MOD = 1e9+7;
int N; 
int maxInserts;
string S;
int memo[205][105][105];

int rec(int cur, int bal, int nInserts) {
  if (bal < 0 || bal > N || nInserts > maxInserts) return 0;
  else if (cur == 2*N) {
    if (bal == 0 && nInserts == maxInserts) return 1;
    return 0;
  } else if (memo[cur][bal][nInserts] != -1) return memo[cur][bal][nInserts];
  int ans = 0;
  if (cur-nInserts < (int)S.size()) {
    ans += rec(cur+1, bal + (S[cur-nInserts] == '(' ? 1 : -1), nInserts);
    ans %= MOD;
  }
  if (nInserts < maxInserts) {
    ans += rec(cur+1, bal+1, nInserts+1);
    ans %= MOD;
    ans += rec(cur+1, bal-1, nInserts+1);
    ans %= MOD;
  }
  cout << cur << " " << bal << " " << nInserts << " : " << ans << endl;
  return memo[cur][bal][nInserts] = ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> S;
  for (int i=0;i<205;i++) 
    for (int j=0;j<105;j++) 
      for (int k=0;k<105;k++) memo[i][j][k] = -1;
  maxInserts = 2*N - (int)S.size();
  cout << rec(0, 0, 0) << endl;
  return 0;
}