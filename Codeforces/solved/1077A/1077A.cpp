#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    ll a,b,k; cin >> a >> b >> k;
    cout << (k+1)/2*a - k/2*b << endl;
  }
  return 0;
}
