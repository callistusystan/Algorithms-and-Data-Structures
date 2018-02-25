#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int f(int i, int j, vector<vi> &memo, vector<vi> &A, int N) {
  if (i >= N || j > i) return 0;
  else if (memo[i][j] != -1) return memo[i][j];
  return memo[i][j] = A[i][j] + max(f(i+1,j,memo,A,N), f(i+1,j+1,memo,A,N));
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    vector<vi> A(20, vi(20));
    for (int i=0;i<N;i++)
      for (int j=0;j<i+1;j++)
        cin >> A[i][j];
    vector<vi> memo(20, vi(20, -1));
    cout << f(0, 0, memo, A, N) << endl;
  }
  return 0;
}
