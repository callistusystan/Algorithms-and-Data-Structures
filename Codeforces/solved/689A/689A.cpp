#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

set<char> seen;

bool isIn(string s) {
  for (char c : s) if (!seen.count(c)) return false;
  return true;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  for (char c : S) seen.insert(c);
  if (isIn("01") 
      || isIn("02") 
      || isIn("03") 
      || isIn("19") 
      || isIn("37") 
      || isIn("176") 
      || isIn("394")
      || isIn("267")
      || isIn("249")
      || isIn("279")
     ) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
