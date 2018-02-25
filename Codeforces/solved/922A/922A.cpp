#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll X,Y; cin >> X >> Y;
  if (Y == 0) cout << "No\n";
  else if (Y == 1) {
    if (X == 0) cout << "Yes\n";
    else cout << "No\n";
  }
  else if (X >= Y-1 && (X-(Y-1))%2 == 0) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}
