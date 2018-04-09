#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int L,R,A; cin >> L >> R >> A;
  for (int i=1000;i>=0;i--) {
    int remainA = A;
    if (L < i) remainA -= abs(L-i);
    if (R < i) remainA -= abs(R-i);
    if (remainA >= 0) {
      cout << i*2 << endl;
      return 0;
    }
  }
  cout << 0 << endl;
  return 0;
}
