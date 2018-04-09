#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

void solve() {
  string S; cin >> S;
  string T,U;
  bool seen = 0;
  for (char c : S) {
    if (seen) T += '8';
    else if ((c-'0')%2) {
      T += c-1;
      seen = 1;
    } else T += c;
  }
  seen = 0;
  for (int i=0;i<S.size();i++) {
    char c = S[i];
    if (seen) U += '0';
    else if ((c-'0')%2) {
      if (c == '9') {
        U += '0';
        bool done = 0;
        for (int j=i-1;j>=0;j--) {
          if (U[j] == '8') U[j] = '0';
          else {
            U[j] += 2;
            done = 1;
            break;
          }
        }
        if (!done) U = '2' + U;
      } else U += c+1;
      seen = 1;
    } else U += c;
  }
  ll N = stoll(S), M = stoll(T), L = stoll(U);
  cout << min(abs(N-M), abs(N-L)) << endl;
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
