#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; cin >> N;
  set<ll> nums;
  for (ll i=1;i*(i+1)/2<=N;i++) nums.insert(i*(i+1)/2);
  for (ll num : nums)
    if (nums.count(N-num)) {
      cout << "YES\n";
      return 0;
    }
  cout << "NO\n";
  return 0;
}
