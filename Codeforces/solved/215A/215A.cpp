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
  int M; cin >> M;
  vi B(M);
  for (int i=0;i<M;i++) cin >> B[i];
  int mx = 0, ans = 0;
  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      if (B[j]%A[i]) continue;
      if (B[j]/A[i] > mx) {
        mx = B[j]/A[i];
        ans = 0;
      }
      if (B[j]/A[i] == mx) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
