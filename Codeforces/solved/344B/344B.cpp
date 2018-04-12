#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int A,B,C; cin >> A >> B >> C;
  for (int i=0;i<=A;i++) {
    int remB,remC;
    remB = B-i; remC = C-(A-i);
    if (remB < 0 || remC < 0) continue;
    if (remB == remC) {
      cout << i << " " << remB << " " << A-i << endl;
      return 0;
    }
  }
  cout << "Impossible\n";
  return 0;
}
