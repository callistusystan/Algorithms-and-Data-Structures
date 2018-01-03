#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int dr[4] = {-1,0,1,0}, dc[4] = {0,1,0,-1};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<string> A(N);
  int sx, sy;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    for (int j=0;j<M;j++) {
      if (A[i][j] == 'S') {
        sx = i; sy = j;
      }
    }
  }
  string S; cin >> S;
  vi order = {0,1,2,3};
  int ans = 0;
  do {
    int x = sx, y = sy;
    for (int i=0;i<(int)S.size();i++) {
      x += dr[order[S[i]-'0']];
      y += dc[order[S[i]-'0']];
      if (x < 0 || x >= N || y < 0 || y >= M || A[x][y] == '#') break;
      else if (A[x][y] == 'E') {
        ans++;
        break;
      }
    }
  } while (next_permutation(order.begin(), order.end()));
  cout << ans << endl;
  return 0;
}
