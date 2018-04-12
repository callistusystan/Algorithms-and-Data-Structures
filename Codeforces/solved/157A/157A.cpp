#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<vi> A(N, vi(N));
  for (int i=0;i<N;i++)
    for (int j=0;j<N;j++)
      cin >> A[i][j];
  vi sumRow(N), sumCol(N);
  for (int i=0;i<N;i++)
    for (int j=0;j<N;j++)
      sumRow[i] += A[i][j];
  for (int j=0;j<N;j++)
    for (int i=0;i<N;i++)
      sumCol[j] += A[i][j];
  int ans = 0;
  for (int i=0;i<N;i++) {
    for (int j=0;j<N;j++) {
      if (sumCol[j] > sumRow[i]) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
