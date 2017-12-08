#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int C, V0, V1, A, L; cin >> C >> V0 >> V1 >> A >> L;

  int ans = 0;
  while (C > 0) {
    if (ans) C += L;
    C -= V0;
    V0 = min(V0 + A, V1);
    ans++;
  }
  cout << ans << endl;
  return 0;
}
