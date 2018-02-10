#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll cur, prev;
  cur = 1; prev = 0;
  vector<ll> terms;
  while (cur <= 4LL*1e16) {
    if (cur%2 == 0)
      terms.push_back(cur);
    ll tmp = cur;
    cur += prev;
    prev = tmp;
  }

  int T; cin >> T;
  while (T--) {
    ll N; cin >> N;
    ll sum = 0;
    for (ll term : terms) if (term < N) sum += term;
    cout << sum << endl;
  }
  return 0;
}
