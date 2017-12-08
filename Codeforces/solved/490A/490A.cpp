#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<queue<int>> q(4);

  for (int i=1;i<=N;i++) {
    int ai; cin >> ai;
    q[ai].push(i);
  }

  int ans = 5000;
  for (int i=1;i<4;i++) {
    ans = min(ans, (int)q[i].size());
  }

  cout << ans << endl;

  for (int i=0;i<ans;i++) {
    for (int j=1;j<4;j++) {
      if (j > 1) cout << " ";
      cout << q[j].front();
      q[j].pop();
    }
    cout << endl;
  }

  return 0;
}
