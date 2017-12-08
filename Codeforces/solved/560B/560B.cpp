#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int L, W; cin >> L >> W;
  vector<pii> A(2);
  for (int i=0;i<2;i++) cin >> A[i].first >> A[i].second;

  bool can = false;
  for (int i=0;i<4;i++) {
    int s1, s2;
    if (i&1) {
      s1 = A[0].first;
      s2 = A[0].second;
    } else {
      s1 = A[0].second;
      s2 = A[0].first;
    }
    if (i&2) {
      s1 += A[1].first;
      s2 = max(s2, A[1].second);
    } else {
      s1 += A[1].second;
      s2 = max(s2, A[1].first);
    }
    if ((s1 <= L && s2 <= W) || (s1 <= W && s2 <= L))
      can = true;
  }

  if (can) cout << "YES";
  else cout << "NO";
  cout << endl;
  return 0;
}
