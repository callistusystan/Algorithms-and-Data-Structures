#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  if (M < N-1 || M > (N+1)*2) cout << -1;
  else {
    vi A(N+1);
    for (int i=1;i<N;i++) {
      A[i] = 1;
      M--;
    }
    for (int i=0;i<N+1;i++) {
      if (M == 0) break;
      int space = 2 - A[i];
      int canPut = min(space, M);
      A[i] += canPut;
      M -= canPut;
    }
    for (int i=0;i<N+1;i++) {
      if (i >= 1 && i <= N) cout << 0;
      for (int j=0;j<A[i];j++) cout << 1;
    }
  }
  cout << endl;

  return 0;
}
