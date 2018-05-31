#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

string ALL = "BGR";

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  map<char, int> cnt;
  for (char c : S) cnt[c]++;
  if (cnt.size() == 1) cout << S[0] << endl;
  else if (cnt.size() == 2) {
    char missing;
    for (char c : ALL) if (!cnt.count(c)) missing = c;
    if (N == 2) cout << missing << endl;
    else {
      string ans; ans += missing;
      bool allMoreThan1 = true;
      for (char c : ALL) {
        if (cnt[c] == 1) {
          ans += c;
          allMoreThan1 = false;
        }
      }
      if (allMoreThan1) cout << ALL << endl;
      else {
        sort(ans.begin(), ans.end());
        cout << ans << endl;
      }
    }
  } else cout << ALL << endl;
  return 0;
}
