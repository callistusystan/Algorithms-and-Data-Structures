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
  if (N == 1) {
    cout << "1\n";
    return 0;
  }
  for (int i=1;i<N;i++)
    if (A[i] > A[i-1]) L[i] = L[i-1] + 1;
    else L[i] = 0;
  for (int i=N-2;i>=0;i--)
    if (A[i] < A[i+1]) R[i] = R[i+1] + 1;
    else R[i] = 0;

  int ans = 0;
  if (A[0] >= A[1]) ans = R[1] + 2;
  if (A[N-1] <= A[N-2]) ans = max(ans, L[N-2] + 2);
  for (int i=1;i<N-1;i++) {
    if (A[i+1]-A[i-1] >= 2)
      ans = max(ans, R[i+1] + L[i-1] + 3);
    else if (A[i] <= A[i-1])
      ans = max(ans, L[i-1] + 2);
    else if (A[i] >= A[i+1])
      ans = max(ans, R[i+1] + 2);
  }
  cout << ans << endl;
  return 0;
}
