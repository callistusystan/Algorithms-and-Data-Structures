#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,K; cin >> N >> K;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  if (K == 1) cout << *min_element(A.begin(), A.end());
  else if (K == 2) {
    vi mnL(N), mnR(N);
    mnL[0] = A[0]; mnR[N-1] = A[N-1];
    for (int i=1;i<N;i++) mnL[i] = min(mnL[i-1], A[i]);
    for (int i=N-2;i>=0;i--) mnR[i] = min(mnR[i+1], A[i]);
    int ans = mnL[0];
    for (int i=0;i<N-1;i++) {
      ans = max(ans, max(mnL[i], mnR[i+1]));
    }
    cout << ans;
  } else cout << *max_element(A.begin(), A.end());
  cout << endl;
  return 0;
}
