#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool isDivisible(ll Y, ll P) {
  for (ll i=2;i<=P && i*i<=Y;i++) {
    if (Y%i==0) return true;
  }
  return false;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int P, Y; cin >> P >> Y;
  while (Y > P) {
    if (!isDivisible(Y, P)) {
      cout << Y << endl;
      return 0;
    }
    Y--;
  }
  cout << "-1\n";
  return 0;
}
