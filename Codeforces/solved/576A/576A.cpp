#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; cin >> N;

  if (N == 1) cout << 0;
  else {
    vector<bool> isPrime(N+1, 1);
    vi ans;
    for (ll i=2;i<=N;i++) {
      if (isPrime[i]) {
        for (ll j=i*i;j<=N;j+=i) {
          isPrime[j] = 0;
        }

        ans.push_back(i);
        ll num = i*i;
        while (num <= N) {
          ans.push_back(num);
          num *= i;
        }
      }
    }

    cout << ans.size() << endl;
    for (int i : ans) cout << i << " ";
  }
  cout << endl;

  return 0;
}
