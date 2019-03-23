#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int LOWER = 0, UPPER = 1, DIGIT = 2;
string sample = "aA1";

int getType(char c) {
  if (isdigit(c)) return DIGIT;
  if (islower(c)) return LOWER;
  return UPPER;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    string s; cin >> s;
    map<int, int> cnt;
    for (char c : s) {
      if (isalpha(c)) {
        if (islower(c)) cnt[LOWER]++;
        else cnt[UPPER]++;
      } else cnt[DIGIT]++;
    }
    if (cnt[LOWER] && cnt[UPPER] && cnt[DIGIT]) cout << s << endl;
    else {
      if (!!cnt[LOWER] + !!cnt[UPPER] + !!cnt[DIGIT] == 1) {
        if (cnt[LOWER]) s[1] = 'A', s[2] = '1';
        else if (cnt[UPPER]) s[1] = 'a', s[2] = '1';
        else s[1] = 'a', s[2] = 'A';
        cout << s << endl;
      } else {
        int need;
        for (int i=0;i<3;i++) if (!cnt[i]) need = i;
        if (getType(s[0]) == getType(s[1])) {
          s[0] = sample[need];
        } else if (cnt[getType(s[0])] > cnt[getType(s[1])]) s[0] = sample[need];
        else s[1] = sample[need];
        cout << s << endl;
      }
    }
  }
  return 0;
}
