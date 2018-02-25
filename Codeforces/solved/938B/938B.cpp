#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int r = 1e6;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N+2);
  A[0] = 1; A[N+1] = 1e6;
  for (int i=1;i<=N;i++) cin >> A[i];
  int ans = 1e6;
  for (int i=1;i<=N;i++) {
    ans = min(ans, min(max(A[i]-1, r-A[i+1]), max(A[i-1]-1, r-A[i])));
  }
  cout << ans << endl;
  return 0;
}
