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
    set<char> seen;
    bool res = true;
    for (int i=1;i<N;i++) {
      if (S[i] != S[i-1]) {
        if (seen.count(S[i])) {
          res = false;
          break;
        }
        seen.insert(S[i-1]);
      }
    }
    if (res) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
