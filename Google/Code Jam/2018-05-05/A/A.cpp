#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int L, N; 

bool rec(map<int, set<char>> &canUse, set<string> &vincent, string &s) {
  if ((int)s.size() == N) {
    if (!vincent.count(s)) return true;
  } else {
    for (char c : canUse[s.size()]) {
      s += c;
      if (rec(canUse, vincent, s)) return true;
      s.pop_back();
    }
  }
  return false;
}

void solve() {
  cin >> L >> N;
  set<string> vincent;
  
  map<int, set<char>> canUse;
  for (int i=0;i<L;i++) {
    string si; cin >> si;
    vincent.insert(si);
    for (int j=0;j<N;j++) canUse[j].insert(si[j]);
  }

  string ans;
  if (rec(canUse, vincent, ans)) cout << ans << endl;
  else cout << "-\n";
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  for (int i=1;i<=T;i++) {
    cout << "Case #" << i << ": ";
    solve();
  }
  return 0;
}
