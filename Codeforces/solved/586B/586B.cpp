#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N), B(N), C(N);
  for (int i=0;i<N-1;i++) cin >> A[i];
  for (int i=0;i<N-1;i++) cin >> B[i];
  for (int i=0;i<N;i++) cin >> C[i];
  int ans = 1e9;
  for (int i=0;i<N;i++) {
    int res1 = 0;
    int cur = N-1;
    while (cur > 0) {
      if (cur > i) res1 += B[cur-1];
      else res1 += A[cur-1];
      cur--;
    }
    res1 += C[i];
    for (int j=0;j<N;j++) {
      if (i == j) continue;
      int res2 = 0;
      int cur = 0;
      while (cur < N-1) {
        if (cur < j) res2 += A[cur];
        else res2 += B[cur];
        cur++;
      }
      res2 += C[j];
      ans = min(ans, res1+res2);
    }
  }
  cout << ans << endl;
  return 0;
}
