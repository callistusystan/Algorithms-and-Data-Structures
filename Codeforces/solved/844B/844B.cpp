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
  vector<vi> row(2, vi(N)), col(2, vi(M));
  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      row[A[i][j]][i]++;
      col[A[i][j]][j]++;
    }
  }
  ll ans = 0;
  for (int i=0;i<N;i++)
    for (int k=0;k<2;k++) ans += (1LL << row[k][i]) - 1;
  for (int j=0;j<M;j++)
    for (int k=0;k<2;k++) ans += (1LL << col[k][j]) - 1;
  ans -= N*M;
  cout << ans << endl;
  return 0;
}
