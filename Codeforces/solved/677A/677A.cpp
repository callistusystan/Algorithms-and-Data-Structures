#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, H; cin >> N >> H;

  int ans = 0;
  for (int i=0;i<N;i++) {
    int hi; cin >> hi;
    if (hi > H) ans += 2;
    else ans ++;
  }

  cout << ans << endl;

  return 0;
}
