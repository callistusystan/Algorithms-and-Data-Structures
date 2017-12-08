#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, X; cin >> N >> X;
  int ans = 0;
  for (int i=0;i<N;i++) {
    char c; ll di; cin >> c >> di;
    if (c == '+') {
      X += di;
    } else {
      if (X >= di) {
        X -= di;
      } else ans++;
    }
  }

  cout << X << " " << ans << endl;
  return 0;
}
