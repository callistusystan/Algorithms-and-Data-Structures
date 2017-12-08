#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int H, M; char c;
  cin >> H >> c >> M;

  int ans = 0;
  while (!(H/10 == M%10 && H%10 == M/10)) {
    M = (M+1)%60;
    if (M == 0) {
      H = (H+1)%24;
    }
    ans++;
  }
  cout << ans << endl;

  return 0;
}
