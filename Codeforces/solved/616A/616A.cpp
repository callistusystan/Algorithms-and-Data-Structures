#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

string f(string s) {
  int i = 0;
  while (i < (int)s.size() && s[i] == '0') i++;
  if (i == (int)s.size()) return "0";
  return s.substr(i);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string A,B; cin >> A >> B;
  A = f(A); B = f(B);
  if (A.size() == B.size()) {
    if (A < B) cout << "<";
    else if (A == B) cout << "=";
    else cout << ">";
  } else if (A.size() < B.size()) cout << "<";
  else cout << ">";
  cout << endl;
  return 0;
}
