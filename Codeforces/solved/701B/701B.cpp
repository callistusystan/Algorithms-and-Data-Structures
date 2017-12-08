#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, M; cin >> N >> M;
  vi row(N), col(N);
  ll nRow, nCol;
  nRow = nCol = 0;
  for (int i=0;i<M;i++) {
    int x,y; cin >> x >> y;
    x--; y--;

    if (!col[x]) {
      nCol++;
      col[x] = 1;
    }
    if (!row[y]) {
      nRow++;
      row[y] = 1;
    }

    cout << N*N - (nCol*N + nRow*(N-nCol)) << " ";
  }
  cout << endl;

  return 0;
}
