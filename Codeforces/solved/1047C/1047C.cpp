#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi fac, pr;

void fast_sieve(int n) {
  fac.assign(n + 1, 0);
  for (ll i=2;i<=n;i++) {
    if (fac[i] == 0) fac[i] = i, pr.push_back (i);
    for (int p : pr) {
      if (p > fac[i] || i*p > n) break;
      else fac[i*p] = p;
    }
  }
}

map<int, int> fast_factors(int n) {
  map<int, int> res;
  while (n > 1) {
    int f = fac[n];
    while (n%f == 0) {
      n /= f;
      res[f]++;
    }
  }
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  fast_sieve(15000005);

  int N; cin >> N;
  vi A(N);
  vector<map<int, int>> factors(N);
  int gcd = -1;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    if (gcd == -1) gcd = A[i];
    gcd = __gcd(gcd, A[i]);
    factors[i] = fast_factors(A[i]);
  }

  // check if all same
  bool allSame = true;
  for (int i=0;i<N;i++) allSame &= A[i] == A[0];
  if (allSame) {
    cout << "-1\n";
    return 0;
  }

  map<int, int> gcd_factors = fast_factors(gcd);

  // get frequency of other factors
  map<int, int> freqFactors;
  for (int i=0;i<N;i++) {
    // remove gcd factors
    for (auto p : gcd_factors) factors[i][p.first] -= p.second;
    // get freq of other factors
    for (auto p : factors[i])
      if (p.second > 0) freqFactors[p.first]++;
  }
  int ans = 0;
  for (auto p : freqFactors) ans = max(ans, p.second);
  cout << N-ans << endl;
  return 0;
}
