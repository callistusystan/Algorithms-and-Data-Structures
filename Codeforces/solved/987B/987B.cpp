#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int X, Y; cin >> X >> Y;
  if (X == Y) {
    cout << "=\n";
    return 0;
  }
  double lhs = log10(X)*Y, rhs = log10(Y)*X;
  if (fabs(lhs-rhs) <= EPS) cout << "=\n";
  else if (lhs > rhs) cout << ">\n";
  else cout << "<\n";
  return 0;
}