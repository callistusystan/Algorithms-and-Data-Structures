#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vi A(N), B(M);
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<M;i++) cin >> B[i];
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  int ans = 0;
  for (int i=0;i<N;i++) {
    bool found = false;
    for (int j=0;j<M;j++) {
      if (B[j] >= A[i]) {
        B[j] = -1;
        found = true;
        break;
      }
    }
    if (!found) ans++;
  }
  cout << ans << endl;
  return 0;
}
