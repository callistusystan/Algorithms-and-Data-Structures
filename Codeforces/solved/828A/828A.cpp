#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, A, B; cin >> N >> A >> B;
  int ans = 0, twoButHasOne = 0;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    if (ai == 1) {
      if (A) A--;
      else if (B) {
        B--;
        twoButHasOne++;
      } else if (twoButHasOne) {
        twoButHasOne--;
      } else ans++;
    } else {
      if (B) B--;
      else ans+=2;
    }
  }
  cout << ans << endl;
  return 0;
}
