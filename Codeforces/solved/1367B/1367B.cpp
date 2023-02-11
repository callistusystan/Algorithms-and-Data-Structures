#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    vi A(N);
    for (int i=0;i<N;i++) cin >> A[i];
    vi bad(2);
    for (int i=0;i<N;i++) {
      if (A[i]%2 != i%2) {
        bad[i%2]++;
      }
    }
    if (bad[0] != bad[1]) cout << "-1\n";
    else cout << bad[0] << endl;
  }
  return 0;
}
