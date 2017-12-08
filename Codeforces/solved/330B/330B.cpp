#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<bool> bad(N);
  for (int i=0;i<M;i++) {
    int u, v; cin >> u >> v;
    u--; v--;
    bad[u] = bad[v] = 1;
  }

  if (N == 1) cout << 0 << endl;
  else {
    int good;
    for (int i=0;i<N;i++) {
      if (!bad[i]) {
        good = i;
        break;
      }
    }
    cout << N - 1 << endl;
    for (int i=0;i<N;i++) {
      if (i == good) continue;
      cout << i+1 << " " << good+1 << endl;
    }
  }
  return 0;
}
