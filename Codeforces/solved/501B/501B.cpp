#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int Q; cin >> Q;
  map<string, string> M;
  set<string> orig, seen;
  for (int i=0;i<Q;i++) {
    string si, ti; cin >> si >> ti;
    M[si] = ti;
    if (!seen.count(si)) {
      orig.insert(si);
    }
    seen.insert(si);
    seen.insert(ti);
  }

  cout << orig.size() << endl;
  for (string s : orig) {
    string cur = s;
    while (M.count(cur)) {
      cur = M[cur];
    }
    cout << s << " " << cur << endl;
  }

  return 0;
}
