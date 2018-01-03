#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  ll x1,y1,x2,y2;
  x1 = y1 = 2e9;
  x2 = y2 = -2e9;
  for (int i=0;i<N;i++) {
    ll xi, yi; cin >> xi >> yi;
    x1 = min(x1, xi);
    y1 = min(y1, yi);
    x2 = max(x2, xi);
    y2 = max(y2, yi);
  }
  ll s = max(x2-x1, y2-y1);
  cout << s*s << endl;
  return 0;
}
