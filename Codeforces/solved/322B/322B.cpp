#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int f(int x) {
  return max(0, x/3);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int A,B,C; cin >> A >> B >> C;
  int mn = min(A, min(B, C)), ans = 0;
  for (int i=0;i<=min(2, mn);i++) {
    ans = max(ans, i + f(A-i) + f(B-i) + f(C-i));
  }
  cout << ans << endl;
  return 0;
}
