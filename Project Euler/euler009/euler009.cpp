#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int f(int a, int b) {
  int c2 = a*a + b*b;
  int c = sqrt(c2);
  while (c*c >= c2) c--;
  while (c*c < c2) c++;
  if (c > b && c*c == c2) return c;
  return -1;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<vector<vi>> A(3005);
  for (int i=1;3*i<=3000;i++) {
    for (int j=i+1;i+2*j<=3000;j++) {
      int k = f(i,j);
      if (k != -1 && i+j+k <= 3000) A[i+j+k].push_back({i,j,k});
    }
  }
  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    if (A[N].size()) {
      int ans = 0;
      for (vi &v : A[N]) {
        ans = max(ans, v[0]*v[1]*v[2]);
      }
      cout << ans << endl;
    } else cout << -1 << endl;
  }
  return 0;
}
