#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<string> A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  int l = 1e9, r = 0, t = 1e9, b = 0;
  int blacks = 0;
  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      if (A[i][j] == 'B') {
        blacks++;
        l = min(l, j); r = max(r, j);
        t = min(t, i); b = max(b, i);
      }
    }
  }
  int mx = max(r-l+1, b-t+1);
  int mn = min(N, M);
  if (blacks == 0) cout << "1\n";
  else if (mx*mx <= mn*mn) cout << mx*mx - blacks << endl;
  else cout << "-1\n";
  return 0;
}
