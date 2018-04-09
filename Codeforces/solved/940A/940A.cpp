#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, D; cin >> N >> D;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  sort(A.begin(), A.end());
  int ans = 1e9;
  for (int i=0;i<N;i++) {
    for (int j=i;j<N;j++) {
      int cur = A[j]-A[i];
      if (cur <= D) ans = min(ans, N-(j-i+1));
    }
  }
  cout << ans << endl;
  return 0;
}
