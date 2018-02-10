#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<ll> primes;
  vector<bool> isPrime(1e6+5, 1);
  for (ll i=2;i<=1e6;i++) {
    if (isPrime[i]) {
      primes.push_back(i);
      for (ll j=i*i;j<=1e6;j+=i) isPrime[j] = 0;
    }
  }

  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    cout << primes[N-1] << endl;
  }
  return 0;
}
