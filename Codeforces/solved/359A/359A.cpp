#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  int A[N][M];
  bool anyOnEdge = false;
  for (int i=0;i<N;i++)
    for (int j=0;j<M;j++) {
      cin >> A[i][j];
      if (A[i][j] && (i == 0 || i == N-1 || j == 0 || j == M-1))
        anyOnEdge = true;
    }
  if (anyOnEdge) cout << "2\n";
  else cout << "4\n";
  return 0;
}
