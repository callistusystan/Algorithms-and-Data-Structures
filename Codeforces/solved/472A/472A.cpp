#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

vector<bool> isPrime(1e6+5, true);

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;

  for (ll i=2;i<1e6+5;i++) {
    if (isPrime[i]) {
      for (ll j=i*i;j<1e6+5;j+=i) {
        isPrime[j] = false;
      }
    }
  }

  for (int i=4;i<N;i++) {
    int other = N - i;
    if (!isPrime[i] && !isPrime[other] && 1 < other && other < N) {
      cout << i << " " << other << endl;
      break;
    }
  }

  return 0;
}
