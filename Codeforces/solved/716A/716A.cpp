#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N,C; cin >> N >> C;

  vector<ll> nums(N);
  for (int i=0;i<N;i++) cin >> nums[i];

  int ans = 1;
  for (int i=1;i<N;i++) {
    if (nums[i] - nums[i-1] <= C) ans++;
    else ans = 1;
  }

  cout << ans << endl;

  return 0;
}
