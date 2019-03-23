#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  vi pSum(N+5);
  for (int i=0;i<N;i++) {
    pSum[i+1] = pSum[i];
    pSum[i+1] += S[i]-'0';
    pSum[i+1] %= 3;
  }
  vi last(3), dp(N+5);
  for (int i=1;i<=N;i++) {
    dp[i] = max(dp[i-1], dp[last[pSum[i]%3]] + (pSum[i]%3 == 0 || last[pSum[i]%3] > 0));
    last[pSum[i]%3] = i;
  }
  cout << dp[N] << endl;        
  return 0;
}
