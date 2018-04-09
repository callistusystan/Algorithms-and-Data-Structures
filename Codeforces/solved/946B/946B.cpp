#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A,B; cin >> A >> B;
  while (1) {
    if (A == 0 || B == 0) {
      cout << A << " " << B << endl;
      return 0;
    }
    if (A >= 2*B) {
      A %= 2*B;
    } else if (B >= 2*A) {
      B %= 2*A;
    } else {
      cout << A << " " << B << endl;
      return 0;
    }
  }
  return 0;
}
