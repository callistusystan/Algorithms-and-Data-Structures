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
    ll num = i;
    int tmp = i;
    while (tmp) {
      num = num*10 + tmp%10;
      tmp /= 10;
    }
    ans = (ans+num)%P;
  }
  cout << ans << endl;
  return 0;
}
