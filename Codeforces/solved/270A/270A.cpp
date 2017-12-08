#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int D; cin >> D;

    if ((360%(180-D)) == 0) cout << "YES";
    else cout << "NO";
    cout << endl;
  }

  return 0;
}
