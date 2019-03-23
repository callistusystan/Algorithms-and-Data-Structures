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
  int ans = 0, cur = 0;
  for (int i=0;i<2*N;i++) {
    if (A[i%N] == 0 && i >= N) break;
    else if (A[i%N] == 0) cur = 0;
    else cur++;
    ans = max(ans, cur);
  }
  cout << ans << endl;
  return 0;
}
