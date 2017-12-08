#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M, Z; cin >> N >> M >> Z;
  int ans = 0;
  for (int i=1;i<=Z;i++) {
    if ((i%N == 0) && (i%M == 0)) {
      ans++;
    }
  }
  cout << ans << endl;

  return 0;
}
