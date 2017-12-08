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
  string ans;
  int cur = 0;
  for (int i=0;i<N;i++) {
    while (A[i] > 0) {
      if (cur == 0) ans += "RLP";
      else ans += "LRP";
      A[i]--;
    }
    if (i != N-1) ans += "R";
    cur++;
  }
  cout << ans << endl;
  return 0;
}
