#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi isPrime(1e5+1, 1), primes;
  for (ll i=2;i<=1e5;i++) {
    if (isPrime[i]) {
      primes.push_back(i);
      for (ll j=i*i;j<=1e5;j+=i) isPrime[j] = 0;
    }
  }

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  if (N == 1 && A[0] == 1) {
    cout << "1\n";
    return 0;
  }
  vi memo(1e5+1), mx(1e5+1);
  for (int i=1;i<=1e5;i++) mx[i] = i;
  for (int i=0;i<N;i++) {
    int x = A[i];
    for (ll p : primes) {
      if (p > x) break;
      if (x%p == 0) {
        memo[A[i]] = max(memo[A[i]], memo[mx[p]] + 1);
        mx[p] = A[i];
        while (x%p == 0) x /= p;
      }
    }
  }
  cout << *max_element(memo.begin(), memo.end()) << endl;
  return 0;
}
