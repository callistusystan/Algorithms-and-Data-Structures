#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
 
  int N; cin >> N;
  string S; cin >> S;
  set<char> seen;
  for (char c : S) seen.insert(tolower(c));
  if (seen.size() == 26u) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}