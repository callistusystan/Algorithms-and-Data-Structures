#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, H; cin >> N >> H;
  vector<pii> A(N);
  vector<pair<ll, ll>> psum(N);
  ll h = 0;
  for (int i=0;i<N;i++) {
    cin >> A[i].first >> A[i].second;
    if (i) h += A[i].first - A[i-1].second;
    psum[i] = { h, (ll)A[i].first - A[0].first };
  }
  ll ans = 0;
  for (int i=0;i<N;i++) {
    pair<ll, ll> p = { psum[i].first + H - 1, LLONG_MAX };
    auto it = upper_bound(psum.begin(), psum.end(), p);
    it--;
    int j = it - psum.begin();
    ll d = it->second - psum[i].second + A[j].second - A[j].first + (H - (it->first - psum[i].first));
    ans = max(ans, d);
  }
  cout << ans << endl;
  return 0;
}
