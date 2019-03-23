#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll w(ll a, ll b) {
  return ((a+1)/2)*((b+1)/2) + (a/2)*(b/2);
}

ll W(ll x1, ll y1, ll x2, ll y2) {
  return w(x2, y2) - w(x1-1, y2) - w(x2, y1-1) + w(x1-1, y1-1);
}

ll B(ll x1, ll y1, ll x2, ll y2) {
  return (y2-y1+1)*(x2-x1+1) - W(x1, y1, x2, y2);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    ll N, M; cin >> N >> M;
    int x1,x2,x3,x4,y1,y2,y3,y4; 
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    ll white = W(1, 1, M, N), black = B(1, 1, M, N);
    white += B(x1, y1, x2, y2);
    black -= B(x1, y1, x2, y2);

    white -= W(x3, y3, x4, y4);
    black += W(x3, y3, x4, y4);

    int x5, y5, x6, y6;
    x5 = max(x1, x3); x6 = min(x2, x4);
    y5 = max(y1, y3); y6 = min(y2, y4);
    if (x5 <= x6 && y5 <= y6) {
      white -= B(x5, y5, x6, y6);
      black += B(x5, y5, x6, y6);
    }
    cout << white << " " << black << endl;
  }
  return 0;
}
