#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<bool> isPrime(100, true);
  for (int i=2;i<=50;i++) {
    if (isPrime[i]) {
      for (int j=i*i;j<=50;j+=i)
        isPrime[j] = false;
    }
  }

  int N,M; cin >> N >> M;
  bool primesBetween = false;
  for (int i=N+1;i<M;i++) {
    if (isPrime[i]) primesBetween = true;
  }

  if (!primesBetween && isPrime[M]) cout << "YES";
  else cout << "NO";

  cout << endl;
  return 0;
}
