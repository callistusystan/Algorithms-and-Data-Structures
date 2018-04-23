#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  string T = S;
  sort(T.begin(), T.end());
  vi cnt(256);
  for (char c : S) cnt[c]++;
  if (S == T && cnt['a'] && cnt['b'] && (cnt['c'] == cnt['a'] || cnt['c'] == cnt['b'])) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
