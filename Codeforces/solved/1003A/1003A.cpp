#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi cnt(105);
  int ans = 1;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    cnt[ai]++;
    ans = max(ans, cnt[ai]);
  }
  cout << ans << endl;
  return 0;
}
