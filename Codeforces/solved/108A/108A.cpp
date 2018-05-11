#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

string f(int cur) {
  int h = (cur/60)%24, m = cur%60;
  string sh = to_string(h), sm = to_string(m);
  if (h < 10) sh = "0" + sh;
  if (m < 10) sm = "0" + sm;
  return sh + ":" + sm;
}

bool isPalindrome(string s) {
  string t = s;
  reverse(t.begin(), t.end());
  return s == t;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int H, M; char c; cin >> H >> c >> M;
  int cur = H*60 + M;
  for (int i=1;i<24*60;i++) {
    cur++; cur = cur%(24*60);
    string s = f(cur);
    if (isPalindrome(s)) {
      cout << s << endl;
      return 0;
    }
  }
  return 0;
}
