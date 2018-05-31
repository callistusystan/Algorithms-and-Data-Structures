#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int f(vi &cnt, int i, int j) {
  return cnt[j+1] - cnt[i-1+1];
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  vi cntA(N+1), cntB(N+1);
  for (int i=0;i<N;i++) {
    cntA[i+1] += (S[i] == 'a') + cntA[i];
    cntB[i+1] += (S[i] == 'b') + cntB[i];
  }
  int ans = count(S.begin(), S.end(), 'a');
  for (int i=1;i<=N;i++) {
    for (int j=i;j<=N;j++) {
      ans = max(ans, cntA[i-1] + cntB[j] - cntB[i-1] + cntA[N] - cntA[min(N, j)]);
    }
  }
  cout << ans << endl;
  return 0;
}
