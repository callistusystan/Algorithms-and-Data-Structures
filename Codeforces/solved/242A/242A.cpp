#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int X,Y,A,B; cin >> X >> Y >> A >> B;
  vector<pii> ans;
  for (int i=A;i<=X;i++)
    for (int j=B;j<min(i, Y+1);j++) ans.push_back({ i, j });
  sort(ans.begin(), ans.end());
  cout << ans.size() << endl;
  for (auto p : ans) cout << p.first << " " << p.second << endl;
  return 0;
}
