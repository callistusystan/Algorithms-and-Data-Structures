#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<vi> A(N, vi(M));
  for (int i=0;i<N;i++) 
    for (int j=0;j<M;j++) cin >> A[i][j];
  int best = -1;
  vi bestRow, bestCol;
  for (int k=0;k<=500;k++) {
    vi row(N), col(M);
    row[0] = k;
    bool can = true;
    for (int j=0;j<M;j++) col[j] = A[0][j] - k;
    for (int i=1;i<N;i++) row[i] = A[i][0] - col[0];
    for (int i : row) can &= i >= 0;
    for (int i : col) can &= i >= 0;
    for (int i=0;i<N;i++)
      for (int j=0;j<M;j++)
        can &= row[i] + col[j] == A[i][j];
    if (!can) continue;
    int total = accumulate(row.begin(), row.end(), 0) + accumulate(col.begin(), col.end(), 0);
    if (best == -1 || total < best) {
      best = total;
      bestRow = row;
      bestCol = col;
    }
  }
  if (best == -1) {
    cout << "-1\n";
    return 0;
  }
  cout << best << endl;
  for (int i=0;i<N;i++) for (int j=0;j<bestRow[i];j++)  cout << "row " << i+1 << endl;
  for (int i=0;i<M;i++) for (int j=0;j<bestCol[i];j++)  cout << "col " << i+1 << endl;
  return 0;
}
