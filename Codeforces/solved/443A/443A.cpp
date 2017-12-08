#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  set<char> seen;

  if (isalpha(S[1]))
    seen.insert(S[1]);
    
  while (cin >> S) {
    seen.insert(S[0]);
  }

  cout << seen.size() << endl;

  return 0;
}
