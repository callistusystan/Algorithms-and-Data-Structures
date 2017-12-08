#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<ll> A(3);
  for (int i=0;i<3;i++) cin >> A[i];
  ll mx = max(A[0], max(A[1], A[2]));

  ll ans = 0;
  for (int i=0;i<3;i++) {
    ans += max(0LL, (mx-1)-A[i]);
  }
  cout << ans << endl;
  return 0;
}
