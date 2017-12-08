#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  sort(A.begin(), A.end());

  int ans = 0, cnt = 0;
  for (int i=0;i<N;i++) {
    if (cnt == M) break;
    if (A[i] < 0) {
      ans -= A[i];
      cnt++;
    }
  }
  cout << ans << endl;

  return 0;
}
