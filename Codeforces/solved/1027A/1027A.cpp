#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    string S; cin >> S;
    bool isPal = true;
    for (int i=0;i<N/2;i++) {
      int diff = abs(S[i] - S[N-1-i]);
      if (!(diff == 0 || diff == 2)) {
        isPal = false; 
        break;
      }
    }
    if (isPal) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
