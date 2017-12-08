#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N,B,D; cin >> N >> B >> D;

  ll ans = 0, cur = 0;
  for (int i=0;i<N;i++) {
    ll ai; cin >> ai;
    if (ai > B) continue;
    cur += ai;
    if (cur > D) {
      cur = 0;
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}
