#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi cnt(1e7+5);
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    cnt[ai]++;
  }

  vi is_prime(1e7+5, 1), primes;
  for (ll i=2;i<=1e7;i++) {
    if (is_prime[i]) {
      primes.push_back(i);
      for (ll j=i*i;j<=1e7;j+=i) is_prime[j] = 0;
    }
  }
  vector<ll> ps(1e7+5);
  for (ll i : primes) 
    for (ll j=i;j<=1e7;j+=i) 
      ps[i] += cnt[j];
  for (int i=1;i<1e7+5;i++) ps[i] += ps[i-1];
  int M; cin >> M;
  while (M--) {
    int l, r; cin >> l >> r;
    l = min(l, (int)1e7);
    r = min(r, (int)1e7);
    cout << ps[r]-ps[l-1] << endl;;
  }
  return 0;
}
