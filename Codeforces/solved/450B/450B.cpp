#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

ll MOD = 1e9+7;

ll mod(ll a) {
  a %= MOD;
  if (a < 0) a += MOD;
  return a;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll X, Y; cin >> X >> Y;
  ll N; cin >> N;

  ll A[6] = {mod(X), mod(Y), mod(Y-X), mod(-X), mod(-Y), mod(X-Y)};

  cout << A[(N-1)%6] << endl;

  return 0;
}
