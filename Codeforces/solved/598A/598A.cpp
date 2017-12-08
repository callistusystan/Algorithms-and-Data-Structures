#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    ll N; cin >> N;

    ll S = N*(N+1)/2;

    for (ll i=1;i<=N;i*=2) {
      S -= 2*i;
    }

    cout << S << endl;
  }

  return 0;
}
