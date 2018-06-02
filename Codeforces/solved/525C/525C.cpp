#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi cnt(1e6+5);
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    cnt[ai]++;
  }
  vi pairs;
  for (int i=1e6;i>=2;i--) {
    while (cnt[i]+cnt[i+1] >= 2) {
      int bonus = min(2, cnt[i+1]);
      cnt[i+1] -= bonus;
      cnt[i] -= 2-bonus;
      pairs.push_back(i);
    }
  }
  ll ans = 0;
  for (int i=0;i+1<(int)pairs.size();i+=2) {
    ans += (ll)pairs[i]*pairs[i+1];
  }
  cout << ans << endl;
  return 0;
}
