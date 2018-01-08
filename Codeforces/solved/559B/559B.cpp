#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

string A,B;
string get(string s) {
  if (s.size()%2) return s;
  string s1,s2;
  s1 = get(s.substr(0, s.size()/2));
  s2 = get(s.substr(s.size()/2));
  if (s1 < s2) return s1 + s2;
  else return s2 + s1;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> A >> B;
  if (get(A) == get(B)) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
