#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll L, R, X, Y, K; cin >> L >> R >> X >> Y >> K;
  for (ll B=X;B<=Y;B++) {
    if (L <= B*K && B*K <= R) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}
