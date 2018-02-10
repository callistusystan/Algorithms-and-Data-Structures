#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll LCM(ll a, ll b) {
  return a*b/__gcd(a, b);
}

ll f(ll a, ll b) {
  if (b <= 1) return a;
  return LCM(a, f(b, b-1));
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    cout << f(N, N-1) << endl;
  }
  return 0;
}
