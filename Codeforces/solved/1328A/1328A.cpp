#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int a, b; cin >> a >> b;
    if (a%b == 0) {
      cout << "0\n";
    } else {
      cout << b - (a%b) << '\n';
    }
  }
  return 0;
}
