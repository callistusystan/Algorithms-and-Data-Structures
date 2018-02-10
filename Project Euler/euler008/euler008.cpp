#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int N, K; cin >> N >> K;
    string S; cin >> S;
    int ans = 0;
    for (int i=0;i+K-1<N;i++) {
      int cur = 1;
      for (int j=i;j<i+K;j++) {
        cur *= (S[j]-'0');
      }
      ans = max(ans, cur);
    }
    cout << ans << endl;
  }
  return 0;
}
