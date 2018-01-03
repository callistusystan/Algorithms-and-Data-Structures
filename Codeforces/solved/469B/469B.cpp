#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int P,Q,L,R; cin >> P >> Q >> L >> R;
  vector<pii> X(Q);
  vector<bool> in(1005);
  for (int i=0;i<P;i++) {
    int a,b; cin >> a >> b;
    for (int j=a;j<=b;j++) in[j] = true;
  }
  for (int i=0;i<Q;i++) cin >> X[i].first >> X[i].second;
  int ans = 0;
  for (int t=L;t<=R;t++) {
    bool can = false;
    for (pii p : X) {
      int a = p.first, b = p.second;
      for (int i=min(1000,a+t);i<=min(1000,b+t);i++) {
        if (in[i]) can = true;
      }
    }
    if (can) ans++;
  }
  cout << ans << endl;
  return 0;
}
