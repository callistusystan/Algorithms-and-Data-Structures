#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  int ans = -1;
  for (int i=0;i<N-1;i++) {
    if (S[i] == 'R' && S[i+1] == 'L') {
      if (ans == -1) {
        ans = (A[i+1]-A[i])/2;
      }
      ans = min(ans, (A[i+1]-A[i])/2);
    }
  }

  cout << ans << endl;

  return 0;
}
