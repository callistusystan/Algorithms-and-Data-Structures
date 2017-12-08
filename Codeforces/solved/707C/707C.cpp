#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A; cin >> A;
  ll B, C;
  if (A%2) {
    C = (A*A+1)/2;
    B = C-1;
  } else {
    C = (A*A+4)/4;
    B = C-2;
  }
  if (A>2 && B>2 && C>2 && A*A + B*B == C*C) cout << B << " " << C;
  else cout << -1;
  cout << endl;
  return 0;
}
