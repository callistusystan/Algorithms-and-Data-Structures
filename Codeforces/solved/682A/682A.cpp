#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N,M; cin >> N >> M;

  ll ans = 0;
  for (ll i=1;i<=N;i++) {
    ll nextFive = (i+1+4)/5;
    ll lastFive = (i+M)/5;
    ans += lastFive-nextFive+1;
  }

  cout << ans << endl;
  return 0;
}
