#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  map<int, int> cnt;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    cnt[ai]++;
  }
  int ans = 0;
  for (auto p : cnt) {
    int x = p.first;
    bool can = false;
    for (int i=0;i<31;i++) {
      int need = (1<<i) - x;
      if (x == need) can |= cnt[x] >= 2;
      else if (cnt.count(need)) can = true;
    }
    if (!can) ans += cnt[x];
  }  
  cout << ans << endl;
  return 0;
}
