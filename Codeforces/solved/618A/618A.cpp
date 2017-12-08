#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;

  vi ans;
  while (N > 0) {
    int ai = __builtin_ctz(N) + 1;
    ans.push_back(ai);
    N &= (~(N & -N));
  }
  reverse(ans.begin(), ans.end());
  for (int i=0;i<(int)ans.size();i++) {
    if (i) cout << " ";
    cout << ans[i];
  }
  cout << endl;

  return 0;
}
