#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi isPrime(1e5+5, 1);
  vector<map<int, int>> nFacs(1e5+5);
  ll ans = 0;
  for (ll i=2;i<=N;i++) {
    if (isPrime[i]) {
      for (ll j=i*i;j<=N;j+=i) {
        isPrime[j] = 0;
        nFacs[j][i]++;
      }
      if (nFacs[j].size() == 1) {

      }
    } else {
      ans += N-1;
    }
  }
  cout << ans << endl;
  return 0;
}
