#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll A[25][25];
int N, M; ll K, ans = 0;
int MID;
map<ll, ll> paths[25][25];

void f(int x, int y, int steps, ll k) {
  k ^= A[x][y];
  if (steps == MID) {
    paths[x][y][k]++;
    return;
  }
  if (x+1 < N) f(x+1, y, steps+1, k);
  if (y+1 < M) f(x, y+1, steps+1, k);
}

void g(int x, int y, int steps, ll k) {
  if (steps == N+M-2-MID) {
    if (paths[x][y].count(K^k)) ans += paths[x][y][K^k];
    return;
  }
  k ^= A[x][y];
  if (x-1 >= 0) g(x-1, y, steps+1, k);
  if (y-1 >= 0) g(x, y-1, steps+1, k);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> M >> K;
  for (int i=0;i<N;i++) for (int j=0;j<M;j++) cin >> A[i][j];
  MID = (N + M - 2)/2;

  f(0, 0, 0, 0);
  g(N-1, M-1, 0, 0);

  cout << ans << endl;
  return 0;
}
