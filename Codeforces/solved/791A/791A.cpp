#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A,B; cin >> A >> B;
  int ans = 0;
  while (1) {
    if (A > B) break;
    A*=3; B*=2;
    ans++;
  }

  cout << ans << endl;

  return 0;
}
