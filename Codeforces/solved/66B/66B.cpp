#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  vi left(N), right(N);
  for (int i=0;i<N;i++) {
    left[i] = 1;
    if (i && A[i] >= A[i-1]) left[i] += left[i-1];
  }
  for (int i=N-1;i>=0;i--) {
    right[i] = 1;
    if (i < N-1 && A[i] >= A[i+1]) right[i] += right[i+1];
  }
  int ans = 1;
  for (int i=0;i<N;i++) {
    ans = max(ans, left[i] + right[i] - 1);
  }
  cout << ans << endl;
  return 0;
}
