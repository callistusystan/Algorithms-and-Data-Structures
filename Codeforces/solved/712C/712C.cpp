#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int X, Y; cin >> X >> Y;
  int cur[3] = { Y, Y, Y };
  int ans = 0;
  while (cur[0] != X) {
    cur[0] = min(X, cur[1]+cur[2]-1);
    sort(cur, cur+3);
    ans++;
  }
  cout << ans << endl;
  return 0;
}
