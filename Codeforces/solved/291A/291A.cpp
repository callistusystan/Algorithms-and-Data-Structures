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
    if (p.first == 0) continue;
    if (p.second > 2) {
      cout << "-1\n";
      return 0;
    } else if (p.second == 2) ans++;
  }
  cout << ans << endl;
  return 0;
}
