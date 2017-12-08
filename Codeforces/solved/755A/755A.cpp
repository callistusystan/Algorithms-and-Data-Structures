#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<bool> isPrime(1e6+5, true);
  for (ll i=2;i<1e6+5;i++) {
    if (isPrime[i]) {
      for (ll j=i*i;j<1e6+5;j+=i) isPrime[j] = false;
    }
  }

  ll N; cin >> N;
  for (ll M=1;M<=1000;M++) {
    if (!isPrime[N*M+1]) {
      cout << M << endl;
      return 0;
    }
  }

  return 0;
}
