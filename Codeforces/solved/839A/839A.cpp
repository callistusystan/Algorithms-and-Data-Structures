#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;

  int given = 0, total = 0;
  for (int i=1;i<=N;i++) {
    int ai; cin >> ai;
    total += ai;

    given += min(total, 8);
    total -= min(total, 8);
    if (given >= K) {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}
