#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll MOD = 1e9+7;
int expmod(int a, int e) {
  if (e == 0) return 1;
  ll res = expmod(a, e/2);
  res = (res*res)%MOD;
  if (e%2) res = (a*res)%MOD;
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size(), cntA = 0;
  ll ans = 0;
  for (int i=0;i<N;i++) {
    if (S[i] == 'a') cntA++;
    else {
      ans += expmod(2, cntA) - 1;
      ans %= MOD;
    }
  }
  if (ans < 0) ans += MOD;
  cout << ans << endl;
  return 0;
}
