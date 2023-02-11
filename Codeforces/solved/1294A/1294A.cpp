#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int sum = 0;
    vi A(4);
    for (int i=0;i<4;i++) {
      cin >> A[i];
      sum += A[i];
    }
    sort(A.begin(), A.begin()+3);
    if (A[3] >= 2*A[2] - (A[0] + A[1]) && sum%3 == 0) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
