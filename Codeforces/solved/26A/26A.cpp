#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool f(int N) {
  vi primes;
  for (int i=2;i*i<=N;i++) {
    if (N%i == 0) {
      primes.push_back(i);
      while (N%i == 0) N /= i;
    }
  }
  if (N > 1) primes.push_back(N);
  if (primes.size() == 2) return true;
  return false;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int ans = 0;
  for (int i=1;i<=N;i++) {
    if (f(i)) ans++;
  }
  cout << ans << endl;
  return 0;
}
