#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, V; cin >> N >> V;
  vi A(3005);
  for (int i=0;i<N;i++) {
    int idx, ai; cin >> idx >> ai;
    A[idx-1] += ai;
  }
  int ans = 0;
  for (int i=0;i<3005;i++) {
    int ytd = 0;
    if (i && A[i-1]) ytd = min(V, A[i-1]);
    int tdy = min(V - ytd, A[i]);
    A[i] -= tdy;
    ans += ytd + tdy;
  }
  cout << ans << endl;
  return 0;
}
