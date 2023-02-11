#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    vi A(N);
    for (int i=0;i<N;i++) cin >> A[i];
    sort(A.begin(), A.end());
    int ans = A[1]-A[0];
    for (int i=0;i+1<N;i++) {
      ans = min(A[i+1]-A[i], ans);
    }
    cout << ans << endl;
  }
  return 0;
}
