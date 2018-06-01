#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  map<char, string> A;
  A['p'] = "Power";
  A['g'] = "Time";
  A['b'] = "Space";
  A['o'] = "Soul";
  A['r'] = "Reality";
  A['y'] = "Mind";
  int N; cin >> N;
  string all = "pgbory";
  set<char> seen;
  while (N--) {
    string si; cin >> si;
    seen.insert(si[0]);
  }
  vector<string> ans;
  for (char c : all) {
    if(!seen.count(c)) ans.push_back(A[c]);
  }
  cout << ans.size() << endl;
  for (string s : ans) cout << s << endl;
  return 0;
}
