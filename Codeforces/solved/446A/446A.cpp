#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N+5), L(N+5), R(N+5);
  for (int i=0;i<N;i++) cin >> A[i];
  L[0] = 1;
  for (int i=1;i<N;i++) {
    if (A[i] > A[i-1]) L[i] = L[i-1]+1;
    else L[i] = 1;
  }
  R[N-1] = 1;
  for (int i=N-2;i>=0;i--) {
    if (A[i] < A[i+1]) R[i] = R[i+1]+1;
    else R[i] = 1;
  }
  int ans = 0;
  for (int i=0;i<N;i++) {
    ans = max(ans, L[i]+R[i]-1);
    if (i && i < N-1 && A[i+1]-A[i-1] >= 2) {
      ans = max(ans, L[i-1]+R[i+1]+1);
    }
    if (i < N-1 && A[i] >= A[i+1]) {
      ans = max(ans, R[i+1]+1);
    }
    if (i && A[i] <= A[i-1]) {
      ans = max(ans, L[i-1]+1);
    }
  }
  cout << ans << endl;
  return 0;
}
