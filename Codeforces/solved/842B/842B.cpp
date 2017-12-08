#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll R, D; cin >> R >> D;
  int N; cin >> N;
  int ans = 0;
  for (int i=0;i<N;i++) {
    ll xi, yi, ri; cin >> xi >> yi >> ri;
    ll d_sq = xi*xi + yi*yi;

    ll innerD, outerD;
    innerD = (R-D+ri)*(R-D+ri);
    outerD = (R-ri)*(R-ri);
    if (innerD <= d_sq && d_sq <= outerD) ans++;
  }
  cout << ans << endl;

  return 0;
}
