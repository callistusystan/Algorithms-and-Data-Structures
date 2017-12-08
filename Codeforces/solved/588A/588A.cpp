#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N), P(N);
  for (int i=0;i<N;i++) {
    cin >> A[i] >> P[i];
  }

  ll ans = 0;
  int minPrice = 105;
  for (int i=0;i<N;i++) {
    minPrice = min(minPrice, P[i]);
    ans += A[i]*minPrice;
  }

  cout << ans << endl;

  return 0;
}
