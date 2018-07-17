#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<vi> A(N, vi(2));
  for (int i=0;i<N;i++) for (int j=0;j<2;j++) cin >> A[i][j];
  int prev = 1e9;
  for (int i=0;i<N;i++) {
    int cur = -1;
    for (int j=0;j<2;j++) {
      if (A[i][j] <= prev) {
        if (cur == -1 || A[i][j] > cur) cur = A[i][j];
      }
    }
    if (cur == -1) {
      cout << "NO\n";
      return 0;
    }
    prev = cur;
  }
  cout << "YES\n";
  return 0;
}
