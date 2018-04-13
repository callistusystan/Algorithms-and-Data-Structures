#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll f(ll x, ll k) {
  ll sum = 0;
  ll denom = 1;
  while (x/denom) {
    sum += x/denom;
    denom*=k;
  }
  return sum;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, K; cin >> N >> K;
  ll lo = -1, hi = N*K+1;
  while (lo != hi-1) {
    ll mid = (lo+hi)/2;
    if (f(mid, K) < N) lo = mid;
    else hi = mid;
  }
  cout << hi << endl;
  return 0;
}
