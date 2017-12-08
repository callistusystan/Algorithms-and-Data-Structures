#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int W; cin >> W;

  bool canDo = 0;
  for (int i=2;i<W;i+=2) {
    int other = W-i;
    if (other > 0 && (other%2 == 0)) {
      canDo = 1;
      break;
    }
  }

  if (canDo) cout << "YES";
  else cout << "NO";
  cout << '\n';

  return 0;
}
