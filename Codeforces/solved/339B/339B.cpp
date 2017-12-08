#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;

  ll ans = 0, cur = 0;
  for (int i=0;i<M;i++) {
    int dest; cin >> dest; dest--;

    if (dest >= cur) {
      ans += dest-cur;
    } else {
      ans += dest+N - cur;
    }
    cur = dest;
  }

  cout << ans << endl;

  return 0;
}
