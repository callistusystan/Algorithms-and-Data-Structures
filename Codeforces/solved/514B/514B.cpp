#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, x0, y0; cin >> N >> x0 >> y0;

  vector<pii> A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i].first >> A[i].second;
  }

  vector<bool> killed(N);
  int ans = 0;
  for (int i=0;i<N;i++) {
    if (!killed[i]) {
      ans++;
      for (int j=0;j<N;j++) {
        if ((A[i].Y - y0)*(A[j].X-x0) == (A[j].Y-y0)*(A[i].X-x0)) {
          killed[j] = true;
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}
