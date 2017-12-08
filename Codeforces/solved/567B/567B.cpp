#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<bool> in(1e6+5);
  int ans = 0, cur = 0;
  for (int i=0;i<N;i++) {
    char c; int ai; cin >> c >> ai;
    if (c == '+') {
      in[ai] = true;
      cur++;
      ans = max(ans, cur);
    } else {
      if (in[ai]) {
        in[ai] = false;
        cur--;
      } else {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
