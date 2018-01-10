#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int K,P; cin >> K >> P;
  ll ans = 0;
  for (int i=1;i<=K;i++) {
    string cur = to_string(i);
    string rev = cur;
    reverse(rev.begin(), rev.end());
    cur += rev;
    ans = (ans + stoll(cur))%P;
  }
  cout << ans << endl;
  return 0;
}
