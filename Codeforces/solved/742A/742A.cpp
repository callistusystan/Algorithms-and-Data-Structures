#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

ll expmod (ll a, ll b, ll m) {
  if (b == 0) return 1;
  ll res = expmod(a,b/2,m);
  res = (res*res)%m;

  if (b%2) return (a*res)%m;
  else return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; cin >> N;

  cout << expmod(1378, N, 10) << endl;

  return 0;
}
