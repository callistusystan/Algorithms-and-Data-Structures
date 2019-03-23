#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    ll S, A, B, C; cin >> S >> A >> B >> C;
    cout << S/(A*C)*(A+B) + (S%(A*C))/C << endl;
  }
  return 0;
}
