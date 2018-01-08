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
  int M; cin >> M;
  sort(A.begin(), A.end());
  int ans = 0;
  for (int i=0;i<N && M > 0;i++, M--) {
    ans += A[i];
  }
  ans -= M*D;
  cout << ans << endl;
  return 0;
}
