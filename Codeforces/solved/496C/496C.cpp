#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M; cin >> N >> M;
  vector<string> A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  int ans = 0;
  vi eq(N-1, 1);
  for (int j=0;j<M;j++) {
    bool ok = true;
    for (int i=0;i+1<N;i++)
      if (eq[i] && A[i][j] > A[i+1][j]) ok = false;
    if (ok) {
      for (int i=0;i+1<N;i++) {
        if (A[i][j] < A[i+1][j]) eq[i] = 0;
      }
    } else ans++;
  }
  cout << ans << endl;
  return 0;
}
