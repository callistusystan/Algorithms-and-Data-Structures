#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int H, M; cin >> H >> M;
    int ans = 0;
    if (M > 0) {
      ans = 60-M;
      H++;
    }
    ans += (24-H)*60;
    cout << ans << endl;
  }
  return 0;
}
