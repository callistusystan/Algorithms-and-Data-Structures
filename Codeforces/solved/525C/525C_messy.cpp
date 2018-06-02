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
  ll ans = 0;
  int j = 1e6;
  while (j >= 2) {
    while (j>=2 && cnt[j]+cnt[j+1] < 2) j--;
    if (j == 1) break;
    if (cnt[j] + cnt[j+1] >= 4) {
      ans += (ll)j*j;
      int bonus = min(4, cnt[j+1]);
      cnt[j+1] -= bonus;
      cnt[j] -= 4-bonus;
      continue;
    }
    int bonus = min(2, cnt[j+1]);
    cnt[j+1] -= bonus;
    cnt[j] -= 2-bonus;
    int i = j-1;
    while (i >= 2 && cnt[i]+cnt[i+1] < 2) i--;
    if (i == 1) break;
    bonus = min(2, cnt[i+1]);
    cnt[i+1] -= bonus;
    cnt[i] -= 2-bonus;
    ans += (ll)i*j;
  }
  cout << ans << endl;
  return 0;
}
