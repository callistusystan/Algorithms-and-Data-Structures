#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

void solve() {
  int N, K; cin >> N >> K;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  sort(A.begin(), A.end());
  int day = 0, i = 0, ans = 0;
  while (i < N) {
    int remain = K;
    while (remain && i < N) {
      if (A[i] > day) { ans++; remain--; }
      i++;
    }
    day++;
  }
  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  for (int i=1;i<=T;i++) {
    cout << "Case #" <<  i << ": ";
    solve();
  }
  return 0;
}
