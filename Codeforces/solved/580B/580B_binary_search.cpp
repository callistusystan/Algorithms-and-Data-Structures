#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N,D; cin >> N >> D;
  vector<pair<ll,ll>> A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i].first >> A[i].second;
  }

  sort(A.begin(), A.end());
  vector<ll> P(N);
  for (int i=0;i<N;i++) {
    P[i] = A[i].second;
    if (i) P[i] += P[i-1];
  }

  ll best = 0;
  for (int i=0;i<N;i++) {
    int b = upper_bound(A.begin(), A.end(), make_pair(A[i].first + D-1, (ll)1e9+5)) - A.begin();
    b--;
    best = max(best, P[b] - (i?P[i-1] : 0));
  }

  cout << best << endl;

  return 0;
}
