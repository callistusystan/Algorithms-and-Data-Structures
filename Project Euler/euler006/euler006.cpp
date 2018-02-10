#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll f(ll N) {
  return N*(N+1)/2;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<ll> sum1(1e4+5);
  for (ll i=1;i<=1e4;i++) {
    sum1[i] = sum1[i-1] + i*i;
  }

  int T; cin >> T;
  while (T--) {
    ll N; cin >> N;
    cout << abs(f(N)*f(N) - sum1[N]) << endl;
  }
  return 0;
}
