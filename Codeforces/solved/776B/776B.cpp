#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<bool> isPrime(N+5, true);
  for (ll i=2;i<N+5;i++) {
    if (isPrime[i]) {
      for (ll j=i*i;j<N+5;j+=i) isPrime[j] = false;
    }
  }

  int nComp = 0;
  for (int i=2;i<=N+1;i++) {
    if (!isPrime[i]) nComp++;
  }

  if (N > 2) cout << 2;
  else cout << 1;
  cout << endl;
  
  for (int i=2;i<=N+1;i++) {
    if (isPrime[i]) cout << 1 << " ";
    else cout << 2 << " ";
  }
  cout << endl;

  return 0;
}
