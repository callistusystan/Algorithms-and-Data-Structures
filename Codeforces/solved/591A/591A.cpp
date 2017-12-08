#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  double L, P,Q; cin >> L >> P >> Q;

  cout << fixed << setprecision(10) << (P*L)/(Q+P) << endl;

  return 0;
}
