#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll LCM(ll a, ll b, ll c) {
  ll tmp = (a*b)/__gcd(a,b);
  return (c*tmp)/__gcd(c,tmp);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; cin >> N;
  if (N >= 3) {
    if (N%2) cout << N*(N-1)*(N-2) << endl;
    else {
      ll best = -1;
      for (ll i=max(1LL,N-50);i<=N-2;i++) {
        for (ll j=i;j<=N-1;j++) {
          for (ll k=j;k<=N;k++) {
            best = max(best, LCM(i,j,k));
          }
        }
      }
      cout << best << endl;
    }
  } else if (N == 2) cout << "2\n";
  else cout << "1\n";
  return 0;
}
