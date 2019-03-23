#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int Q; cin >> Q;
  int l = 0, r = 0;
  vi pos(2e5+5);
  bool first = true;
  while (Q--) {
    char c; int id; cin >> c >> id;
    if (first) {
      pos[id] = 0;
      first = false;
      continue;
    }
    if (c == 'L') pos[id] = --l;
    else if (c == 'R') pos[id] = ++r;
    else cout << min(pos[id]-l, r-pos[id]) << endl;
  }
  return 0;
}
