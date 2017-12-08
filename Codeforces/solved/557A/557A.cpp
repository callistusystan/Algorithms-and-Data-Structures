#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi l(3), r(3);
  for (int i=0;i<3;i++) cin >> l[i] >> r[i];

  vi ans(3);
  for (int i=0;i<3;i++) {
    ans[i] = l[i];
    N -= l[i];
  }

  for (int i=0;i<3;i++) {
    int canPut = min(N, r[i]-l[i]);
    ans[i] += canPut;
    N -= canPut;
  }

  for (int i=0;i<3;i++) cout << ans[i] << " ";
  cout << endl;

  return 0;
}
