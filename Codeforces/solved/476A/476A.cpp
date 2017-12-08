#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  if (N == 0) cout << 0 << endl;
  else if (M > N) cout << -1 << endl;
  else {
    bool can = false;
    for (int i=1;i<N;i++) {
      if ((N+1)/2 <= i*M && i*M <= N) {
        can = true;
        cout << i*M << endl;
        break;
      }
    }
    if (!can) cout << -1 << endl;
  }

  return 0;
}
