#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<vector<ll>> A(N, vector<ll>(N));
  set<ll> sums;
  int x, y;
  for (int i=0;i<N;i++) {
    ll sumi = 0;
    for (int j=0;j<N;j++) {
      cin >> A[i][j];
      if (A[i][j] == 0) {
        x = i;
        y = j;
      }
      sumi += A[i][j];
    }
    sums.insert(sumi);
  }

  if (N == 1) cout << 1;
  else {
    if (sums.size() > 2) cout << -1;
    else {
      ll minSum, maxSum;
      minSum = *min_element(sums.begin(), sums.end());
      maxSum = *max_element(sums.begin(), sums.end());

      A[x][y] = maxSum - minSum;
      if (A[x][y] <= 0) cout << -1;
      else {
        bool can = true;
        for (int j=0;j<N;j++) {
          ll sumi = 0;
          for (int i=0;i<N;i++) {
            sumi += A[i][j];
          }
          if (sumi != maxSum) can = false;
        }
        ll sum1, sum2; sum1 = sum2 = 0;
        for (int i=0;i<N;i++) {
          sum1 += A[i][i];
          sum2 += A[i][N-1-i];
        }
        if (!(sum1 == maxSum && sum2 == maxSum)) can = false;
        if (can) cout << maxSum-minSum;
        else cout << -1;
      }
    }
  }
  cout << endl;
  return 0;
}
