#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int UP = 0, RIGHT = 1, DOWN = 2, LEFT = 3;
  vector<pii> A(N+1);
  for (int i=0;i<N+1;i++) cin >> A[i].X >> A[i].Y;
  int cur = UP, ans = 0;
  for (int i=2;i<N+1;i++) {
    if (cur == UP) {
      if (A[i].X < A[i-1].X) {
        cur = LEFT;
        ans++;
      } else cur = (cur+1)%4;
    } else if (cur == RIGHT) {
      if (A[i].Y > A[i-1].Y) {
        cur = UP;
        ans++;
      } else cur = (cur+1)%4;
    } else if (cur == DOWN) {
      if (A[i].X > A[i-1].X) {
        cur = RIGHT;
        ans++;
      } else cur = (cur+1)%4;
    } else {
      if (A[i].Y < A[i-1].Y) {
        cur = DOWN;
        ans++;
      } else cur = (cur+1)%4;
    }
  }  
  cout << ans << endl;
  return 0;
}
