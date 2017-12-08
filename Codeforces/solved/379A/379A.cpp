#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int A, B; cin >> A >> B;

  int ans = 0, used = 0;

  while (A > 0) {
    A--; used++; ans++;
    if (used == B) {
      used = 0;
      A++;
    }
  }

  cout << ans << endl;

  return 0;
}
