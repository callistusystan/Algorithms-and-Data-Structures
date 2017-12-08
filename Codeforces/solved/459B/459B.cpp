#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; cin >> N;
  vi B(N);
  for (int i=0;i<N;i++) cin >> B[i];
  sort(B.begin(), B.end());

  if (B[0] == B[N-1]) {
    cout << 0 << " " << N*(N-1)/2 << endl;
  } else {
    ll cntA, cntB;
    cntA = cntB = 0;
    for (int i=0;i<N;i++) {
      if (B[i] != B[0]) break;
      cntA++;
    }
    for (int i=N-1;i>=0;i--) {
      if (B[i] != B[N-1]) break;
      cntB++;
    }
    cout << B[N-1]-B[0] << " " << cntA*cntB << endl;
  }

  return 0;
}
