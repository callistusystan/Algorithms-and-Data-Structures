#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  vector<bool> isPrime(1e6+5,true);

  for (ll i=2;i<1e6+5;i++) {
    if (isPrime[i]) {
      for (ll j=i*i;j<1e6+5;j+=i)
        isPrime[j] = false;
    }
  }

  int N; cin >> N;
  for (int i=0;i<N;i++) {
    ll X; cin >> X;

    bool can = false;
    for (ll S=max(2LL, (ll)sqrt(X)-2);S<=(ll)sqrt(X)+2;S++) {
      if (S*S == X && isPrime[S]) can = true;
    }

    if (can) cout << "YES";
    else cout << "NO";
    cout << endl;
  }

  return 0;
}
