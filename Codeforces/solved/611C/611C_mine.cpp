#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<string> A(N+5, string(M+5, '#'));
  for (int i=1;i<=N;i++)
    for (int j=1;j<=M;j++)
      cin >> A[i][j];

  vector<vi> cnt(N+5, vi(M+5)), B(N+5, vi(M+5)), C(N+5, vi(M+5));
  for (int i=1;i<=N;i++) {
    for (int j=1;j<=M;j++) {
      if (A[i][j] == '.') {
        B[i][j] += (i-1 && A[i-1][j] == '.');
        C[i][j] += (j-1 && A[i][j-1] == '.');
        cnt[i][j] += (i-1 && A[i-1][j] == '.') + (j-1 && A[i][j-1] == '.');
      }
      B[i][j] += B[i-1][j];
      C[i][j] += C[i][j-1];
      cnt[i][j] += cnt[i-1][j] + cnt[i][j-1] - cnt[i-1][j-1];
    }
  }

  int Q; cin >> Q;
  while (Q--) {
    int a,b,c,d; cin >> a >> b >> c >> d;
    cout << cnt[c][d] - cnt[a][d] - cnt[c][b] + cnt[a][b] + B[c][b] - B[a][b] + C[a][d] - C[a][b] << endl;
  }
  return 0;
}
