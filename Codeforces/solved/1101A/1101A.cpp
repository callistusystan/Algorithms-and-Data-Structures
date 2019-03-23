#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int Q; cin >> Q;
  while (Q--) {
    int l,r,d; cin >> l >> r >> d;
    if (d < l) cout << d << endl;
    else cout << (r/d+1)*d << endl;
  }
  return 0;
}
