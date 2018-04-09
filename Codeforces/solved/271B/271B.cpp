#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi isPrime(2e5+5, 1); isPrime[1] = 0;
  for (ll i=2;i<=2e5;i++) {
    if (isPrime[i]) {
      for (ll j=i*i;j<=2e5;j+=i)
        isPrime[j] = 0;
    }
  }
  vi need(1e5+5);
  int lastPrime = 1e5;
  while (!isPrime[lastPrime]) lastPrime++;
  for (int i=1e5;i>=1;i--) {
    if (isPrime[i]) lastPrime = i;
    else need[i] = lastPrime-i;
  }
  int N,M; cin >> N >> M;
  vector<vi> A(N, vi(M));
  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      int ai; cin >> ai;
      A[i][j] = need[ai];
    }
  }
  int ans = -1;
  for (int i=0;i<N;i++) {
    int res = 0;
    for (int j=0;j<M;j++) {
      res += A[i][j];
    }
    if (ans == -1 || res < ans) ans = res;
  }
  for (int j=0;j<M;j++) {
    int res = 0;
    for (int i=0;i<N;i++) {
      res += A[i][j];
    }
    if (ans == -1 || res < ans) ans = res;
  }
  cout << ans << endl;
  return 0;
}
