#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, D; cin >> N >> D;
  ll ans = 0;
  ll prev = 0;
  for (int i=0;i<N;i++) {
    ll ai; cin >> ai;
    if (ai <= prev) {
      ll add = (prev+1-ai+D-1)/D;
      ans += add;
      prev = ai + add*D;
    } else prev = ai;
  }
  cout << ans << endl;
  return 0;
}
