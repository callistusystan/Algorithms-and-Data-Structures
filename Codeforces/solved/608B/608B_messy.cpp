#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string P, S; cin >> P >> S;
  int M = P.size(), N = S.size();
  vector<vi> psum(2, vi(M)), ssum(2, vi(M));
  for (int i=0;i<M;i++) {
    psum[P[i]-'0'][i] = 1;
    if (i) {
      psum[0][i] += psum[0][i-1];
      psum[1][i] += psum[1][i-1];
    }
  }
  for (int i=0;i<M;i++) {
    ssum[P[M-1-i]-'0'][i] = 1;
    if (i) {
      ssum[0][i] += ssum[0][i-1];
      ssum[1][i] += ssum[1][i-1];
    }
  }
  ll ans = 0;
  for (int i=0;i+M-1<N;i++) ans += psum[1-(S[i]-'0')][min(i, M-1)];
  for (int i=N-M+1;i<N;i++) {
    if (i >= M-1) ans += ssum[1-(S[i]-'0')][N-1-i];
    else ans += psum[1-(S[i]-'0')][i] - (i-(N-M)-1 >=0 ? psum[1-(S[i]-'0')][i-(N-M)-1] : 0);
  }
  cout << ans << endl;
  return 0;
}