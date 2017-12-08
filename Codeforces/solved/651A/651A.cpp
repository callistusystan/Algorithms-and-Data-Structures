#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int ans = 0;
  int A,B; cin >> A >> B;
  while (1) {
    if (A == 1 && B == 1) break;
    if (A <= B) {
      A++;
      B-=2;
    } else {
      A-=2;
      B++;
    }

    ans++;
    if (A <= 0 || B <= 0) break;
  }
  cout << ans << endl;

  return 0;
}
