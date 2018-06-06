#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<vi> A(N, vi(M));
  for (int i=0;i<N;i++) for (int j=0;j<M;j++) cin >> A[i][j];
  int ans = 0;
  for (int i=0;i<N;i++) {
    vi S(M);
    for (int j=0;j<M;j++) {
      if (j) S[j] = S[j-1];
      S[j] += A[i][j];
    }
    for (int j=0;j<M;j++) {
      if (A[i][j]) continue;
      ans += S[j] > 0;
      ans += S[M-1] - S[j] > 0;
    }
  }
  for (int j=0;j<M;j++) {
    vi S(N);
    for (int i=0;i<N;i++) {
      if (i) S[i] = S[i-1];
      S[i] += A[i][j];
    }
    for (int i=0;i<N;i++) {
      if (A[i][j]) continue;
      ans += S[i] > 0;
      ans += S[N-1] - S[i] > 0;
    }
  }
  cout << ans << endl;
  return 0;
}
