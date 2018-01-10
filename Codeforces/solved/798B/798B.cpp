#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<string> A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  int ans = 2e9;
  for (int i=0;i<N;i++) {
    int res = 0;
    for (int j=0;j<N;j++) {
      string S = A[j]+A[j];
      int val = S.find(A[i]);
      if (val == string::npos) {
        cout << "-1\n";
        return 0;
      }
      res += S.find(A[i]);
    }
    ans = min(ans, res);
  }
  cout << ans << endl;
  return 0;
}
