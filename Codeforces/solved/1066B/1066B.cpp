#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, R; cin >> N >> R;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  int l = -1, ans = 0;
  while (l < N-1) {
    int best = -1;
    for (int i=0;i<N;i++) {
      if (!A[i]) continue;
      if (i-R+1 <= l+1 && l+1 <= i+R-1) best = i;
    }
    if (best == -1) {
      cout << "-1\n";
      return 0;
    }
    ans++;
    l = best+R-1;
  }
  cout << ans << endl;
  return 0;
}