#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<ll> A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  sort(A.begin(), A.end());

  ll ans = 0;
  for (ll i=1;i<=N;i++) {
    ans += abs(i-A[i-1]);
  }

  cout << ans << endl;
  return 0;
}
