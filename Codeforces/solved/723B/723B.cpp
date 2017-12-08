#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;

  bool inParen = false, word = false;
  int cur,ans1,ans2;
  cur = ans1 = ans2 = 0;
  for (int i=0;i<N;i++) {
    if (S[i] == '_') {
      if (inParen and word) ans2++;
      cur = 0;
      word = false;
    } else if (S[i] == '(') {
      inParen = true;
      cur = 0;
      word = false;
    } else if (S[i] == ')') {
      if (inParen and word) ans2++;
      inParen = false;
      cur = 0;
      word = false;
    } else {
      word = true;
      cur++;
      if (!inParen)
        ans1 = max(ans1, cur);
    }
  }

  cout << ans1 << " " << ans2 << endl;

  return 0;
}
