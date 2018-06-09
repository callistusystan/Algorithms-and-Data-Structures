#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool isPrime(int x) {
  for (int i=2;i*i<=x;i++)
    if (x%i == 0) return false;
  return true;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi primes;
  for (int i=2;i<=1000;i++) if (isPrime(i)) primes.push_back(i);
  int M = primes.size();
  int N, K; cin >> N >> K;
  int cnt = 0;
  for (int i=2;i<=N;i++) {
    if (!isPrime(i)) continue;
    bool can = false;
    for (int j=0;j+1<M;j++) {
      if (primes[j] + primes[j+1] + 1 == i) {
        can = true;
        break;
      }
    }
    cnt += can;
  }
  if (cnt >= K) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
