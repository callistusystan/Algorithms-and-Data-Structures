#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, X; cin >> N >> X;

  vector<ll> A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i];
  }
  sort(A.begin(), A.end());

  ll ans = 0;
  for (int i=0;i<N;i++) {
    ans += A[i]*X;
    X = max(1LL, X-1);
  }
  cout << ans << endl;

  return 0;
}
