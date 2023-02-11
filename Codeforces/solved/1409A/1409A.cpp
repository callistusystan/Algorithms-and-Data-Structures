#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int A, B; cin >> A >> B;
    cout << (abs(A-B)+9)/10 << endl;
  }
  return 0;
}
