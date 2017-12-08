#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, K; cin >> N >> K;
  vector<ll> A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i];
  }

  ll ans = 0;
  for (int i=0;i<N;i++) {
    ll nDays = (A[i]+2*K-1)/(2*K);
    ans += nDays;
    ll nPockets = (A[i]+K-1)/K;
    if (i+1 < N && (nPockets%2)) {
      A[i+1] = max(0LL, A[i+1]-K);
    }
  }
  cout << ans << endl;

  return 0;
}
