#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int X, Y; cin >> X >> Y;
  vector<pii> ans;
  ans.push_back({ (abs(X)+abs(Y))*(X > 0 ? 1 : -1), 0 });
  ans.push_back({ 0, (abs(X)+abs(Y))*(Y > 0 ? 1 : -1) });
  sort(ans.begin(), ans.end());
  cout << ans[0].first << " " << ans[0].second << " " << ans[1].first << " " << ans[1].second << endl;
  return 0;
}
