#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A,B,C,D;
  cin >> A >> B >> C >> D;

  for (ll i=0;i<=1000000;i++) {
    if (B+i*A < D) continue;
    if ((B + i*A - D)%C == 0) {
      cout << B+i*A << endl;
      return 0;
    }
  }
  cout << -1 << endl;

  return 0;
}
