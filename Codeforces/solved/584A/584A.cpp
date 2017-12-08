#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, T; cin >> N>> T;

  string ans(N,'0');
  ans[0] = '1';
  if (T == 10) {
    if (N == 1) cout << -1;
    else cout << ans;
  } else {
    ans[0] = '0'+T;
    cout << ans;
  }
  cout << endl;

  return 0;
}
