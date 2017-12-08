#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<ll> B(N);
  for (int i=0;i<N;i++) cin >> B[i];

  ll cur = 0, ans = 0;
  for (int i=0;i<N;i++) {
    ll diff = abs(B[i] - cur);
    ans += diff;
    if (B[i] > cur) {
      cur += diff;
    } else if (B[i] < cur) {
      cur -= diff;
    }
  }
  cout << ans << endl;

  return 0;
}
