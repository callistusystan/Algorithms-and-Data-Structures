#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  map<int, int> last;
  pii ans = {1e9, 1e9};
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    if (last.count(ai)) ans = min(ans, {ai, i-last[ai]});
    last[ai] = i;
  }
  cout << ans.second << endl;
  return 0;
}
