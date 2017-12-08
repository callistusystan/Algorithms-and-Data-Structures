#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A,B,C,D,K,L,R;
  cin >> A >> B >> C >> D >> K;

  L = max(A,C);
  R = min(B,D);

  ll ans = R-L+1;
  if (L <= K && K <= R) ans--;
  ans = max(ans, 0LL);
  cout << ans << endl;

  return 0;
}
