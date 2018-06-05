#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
  int N, ans = 0; cin >> N;
  while (N--) {
    ll a,b,c; cin >> a >> b >> c;
    bool res1 = a*x1 + b*y1 + c > 0;
    bool res2 = a*x2 + b*y2 + c > 0;
    ans += res1 != res2;
  }
  cout << ans << endl;
  return 0;
}
