#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int f(ll a) {
  int ans = 0;
  while (a > 0) {
    ans++;
    a >>= 1;
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N,K; cin >> N >> K;
  if (K == 1) cout << N << endl;
  else cout << (1LL<<(f(N)))-1 << endl;
  return 0;
}
