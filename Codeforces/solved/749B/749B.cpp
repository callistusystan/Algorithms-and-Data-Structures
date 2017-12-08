#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<pii> A(3);
  for (int i=0;i<3;i++) cin >> A[i].X >> A[i].Y;

  vector<pii> ans;
  for (int i=0;i<3;i++) {
    pii translate = {1e9, 1e9};
    for (int j=0;j<3;j++) {
      if (i == j) continue;

      if (translate.X == 1e9) {
        translate = { A[j].X-A[i].X, A[j].Y-A[i].Y };
      } else ans.push_back({A[j].X + translate.X, A[j].Y +translate.Y});
    }
  }

  cout << ans.size() << endl;
  for (int i=0;i<(int)ans.size();i++) {
    cout << ans[i].X << " " << ans[i].Y << endl;
  }

  return 0;
}
