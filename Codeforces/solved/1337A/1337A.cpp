#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    // A+B > C
    // A+C > B
    // B+C > A
    int A, B, C, D; cin >> A >> B >> C >> D;
    cout << B << " " << C << " " << C << endl;
  }
  return 0;
}
