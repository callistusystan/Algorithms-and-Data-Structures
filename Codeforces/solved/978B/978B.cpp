#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  int i = 0, j = 0, ans = 0;
  while (i < N) {
    if (S.substr(i, 3) == "xxx") {
      j = i;
      while (j < N && S[j] == 'x') j++;
      ans += j-i-2;
      i = j;
    } else i++;
  }
  cout << ans << endl;
  return 0;
}
