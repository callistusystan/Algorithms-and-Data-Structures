#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; cin >> N;
  ll prev=1,cur=2;
  ll ans = 0;
  while (N >= cur) {
    ll tmp = cur;
    cur += prev;
    prev = tmp;
    ans++;
  }
  cout << ans << endl;
  return 0;
}
