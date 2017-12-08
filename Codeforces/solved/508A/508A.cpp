#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool check(vector<vi> &A, int x, int y) {
  int dr[4] = {-1,-1,0,0};
  int dc[4] = {-1,0,-1,0};
  for (int k=0;k<4;k++) {
    int cnt = 0;
    for (int i=0;i<2;i++) {
      for (int j=0;j<2;j++) {
        if (A[x+dr[k]+i][y+dc[k]+j] == 1) cnt++;
      }
    }
    if (cnt == 4) return true;
  }
  return false;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M, K; cin >> N >> M >> K;
  vector<vi> A(1005, vi(1005));

  for (int i=1;i<=K;i++) {
    int x, y; cin >> x >> y;
    A[x][y] = 1;
    if (check(A, x, y)) {
      cout << i << endl;
      return 0;
    }
  }

  cout << 0 << endl;
  return 0;
}
