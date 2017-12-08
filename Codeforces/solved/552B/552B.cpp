#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  ll lo,hi; lo = 1;hi = 10;
  ll ans = 0, i = 1;;
  while (hi <= N) {
    ans += (hi-lo)*i;

    i++;
    lo *= 10;
    hi *= 10;
  }

  ans += (N-lo+1)*i;

  cout << ans << endl;

  return 0;
}
