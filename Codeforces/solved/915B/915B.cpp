#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,P,L,R; cin >> N >> P >> L >> R;
  if (L == 1 && R == N) {
    cout << "0\n";
  } else if (L == 1) {
    cout << abs(R-P)+1 << endl;
  } else if (R == N) {
    cout << abs(P-L)+1 << endl;
  } else {
    if (L == R) {
      cout << abs(P-L) + 2 << endl;
    } else {
      cout << min(abs(L-P)+1, abs(R-P)+1) + R-L+1 << endl;
    }
  }
  return 0;
}
