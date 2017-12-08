#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

ll expmod(ll a, ll e, ll m) {
  if (e == 0) return 1;
  ll res = expmod(a, e/2,m);
  if (e%2) return (((a * res)%m) * res)%m;
  else return ((res*res)%m);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; cin >> N;

  cout << expmod(5,N,100) << endl;

  return 0;
}
