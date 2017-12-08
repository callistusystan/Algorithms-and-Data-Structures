#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, M;
vector<vi> A(105, vi(105, 1)), B(105, vi(105));

int get(int a, int b) {
  int res = 0;
  for (int j=0;j<M;j++) {
    res = max(res, A[a][j]);
  }
  for (int i=0;i<N;i++) {
    res = max(res, A[i][b]);
  }
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> M;
  vector<bool> row(N), col(M);
  for (int i=0;i<N;i++)
    for (int j=0;j<M;j++) {
      cin >> B[i][j];
      if (B[i][j] == 0) {
        row[i] = 1;
        col[j] = 1;
      }
    }
  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      if (row[i] == 1 || col[j] == 1) A[i][j] = 0;
    }
  }
  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      if (get(i,j) != B[i][j]) {
        cout << "NO" << endl;
        return 0;
      }
    }
  }
  cout << "YES" << endl;
  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      cout << A[i][j] << " \n"[j==M-1];
    }
  }
  return 0;
}
