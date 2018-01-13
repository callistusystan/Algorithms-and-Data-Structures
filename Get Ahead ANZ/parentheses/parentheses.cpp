#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  if (N <= 1) {
    cout << 0 << endl;
    return 0;
  }
  int i, j, cntOpen, cntClose, ans;
  i = j = cntOpen = cntClose = ans = 0;
  // pointers
  while (i < N && j < N) {
    while (i < N && S[i] != '(') i++;
    j = i;
    while (j < N) {
      if (S[j] == '(') cntOpen++;
      else cntClose++;
      if (cntClose > cntOpen) {
        i = j;
        cntOpen = cntClose = 0;
        break;
      }
      ans = max(ans, cntClose*2);
      j++;
    }
  }
  cout << ans << endl;
  return 0;
}
