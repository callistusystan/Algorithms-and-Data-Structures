#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {

  set<int> squares;
  int i = 1;
  while (i*i <= 2e9) {
    squares.insert(i*i);
    i++;
  }

  string S; cin >> S;
  int N = S.size(), ans = -1;
  for (int i=1;i<1<<N;i++) {
    int num = 0;
    bool first = true, can = true;
    for (int j=0;j<N;j++) {
      if (i&(1<<j)) {
        if (first && S[j] == '0') {
          can = false;
          break;
        }
        num *= 10;
        num += S[j] - '0';
        first = false;
      }
    }
    if (!can) continue;
    int res = N - __builtin_popcount(i);
    if (squares.count(num) && (ans == -1 || res < ans)) ans = res;
  }
  cout << ans << endl;
  return 0;
}
