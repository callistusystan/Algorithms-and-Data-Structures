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
  vector<pii> A(N);
  for (int i=0;i<N;i++) cin >> A[i].first >> A[i].second;

  int ans = 0;
  for (int i=0;i<N;i++) {
    bool right, left, lower, upper;
    right = left = lower = upper = false;
    for (int j=0;j<N;j++) {
      if (i == j) continue;

      if (A[j].X > A[i].X && A[j].Y == A[i].Y) right = true;
      if (A[j].X < A[i].X && A[j].Y == A[i].Y) left = true;
      if (A[j].X == A[i].X && A[j].Y < A[i].Y) lower = true;
      if (A[j].X == A[i].X && A[j].Y > A[i].Y) upper = true;
    }
    if (right && left && lower && upper) ans++;
  }

  cout << ans << endl;

  return 0;
}
