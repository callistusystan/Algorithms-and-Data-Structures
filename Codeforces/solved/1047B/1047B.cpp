#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int ans = 0;
  while (N--) {
    int x,y; cin >> x >> y;
    ans = max(ans, x+y);
  }
  cout << ans << endl;
  return 0;
}
