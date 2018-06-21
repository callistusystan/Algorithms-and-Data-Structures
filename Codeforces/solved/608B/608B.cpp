#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string P, S; cin >> P >> S;
  int M = P.size(), N = S.size();
  vector<vi> psum(2, vi(N));
  for (int i=0;i<N;i++) {
    psum[S[i]-'0'][i] = 1;
    if (i) {
      psum[0][i] += psum[0][i-1];
      psum[1][i] += psum[1][i-1];
    }
  }
  ll ans = 0;
  for (int i=0;i<M;i++) ans += psum[1-(P[i]-'0')][i+N-M] - (i ? psum[1-(P[i]-'0')][i-1] : 0);
  cout << ans << endl;
  return 0;
}