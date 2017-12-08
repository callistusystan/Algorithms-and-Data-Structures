#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;

  int ans = 0, done = 5-K;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    if (ai <= done) ans ++;
  }

  cout << ans/3 << endl;

  return 0;
}
