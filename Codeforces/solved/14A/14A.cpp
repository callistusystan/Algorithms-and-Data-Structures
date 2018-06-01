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
  int l=1e9,r=0,t=1e9,b=0;
  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      if (A[i][j] == '*') {
        l = min(l, j);
        r = max(r, j);
        t = min(t, i);
        b = max(b, i);
      }
    }
  }
  for (int i=t;i<=b;i++) {
    for (int j=l;j<=r;j++) cout << A[i][j];
    cout << endl;
  }
  return 0;
}
