#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S,T; cin >> S >> T;
  vi has(26), need(26);
  for (char c : S) has[c-'a']++;
  for (char c : T) {
    if (!has[c-'a']) {
      cout << "-1\n";
      return 0;
    }
    need[c-'a']++;
  } 
  int ans = 0;
  for (int i=0;i<26;i++) ans += min(has[i], need[i]);
  cout << ans << endl;
  return 0;
}
