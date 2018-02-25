#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

map<ll, ll> g(ll N) {
  map<ll, ll> M;
  for (ll i=2;i*i<=N;i++) {
    if (N%i==0) {
      while (N%i==0) {
        M[i]++;
        N/=i;
      }
    }
  }
  if (N > 1) M[N]++;
  return M;
}

ll f(ll i) {
  map<ll, ll> m1 = g(i), m2 = g(i+1);
  if (m1.count(2)) m1[2]--;
  else m2[2]--;
  // union
  for (auto p : m1) m1[p.first] += m2[p.first];
  for (auto p : m2)
    if (!m1.count(p.first)) m1[p.first] += m2[p.first];
  ll ans = 1;
  for (auto p : m1) ans *= p.second+1;
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    ll N; cin >> N;

    ll i = 1;
    while (f(i) <= N) i++;
    cout << i*(i+1)/2 << endl;
  }
  return 0;
}
