#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M, K; cin >> N >> M >> K;

  int ans = 0;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    if (ai == 1) {
      if (M > 0) M--;
      else ans++;
    } else {
      if (K > 0) K--;
      else if (M > 0) M--;
      else ans++;
    }
  }

  cout << ans << endl;

  return 0;
}
