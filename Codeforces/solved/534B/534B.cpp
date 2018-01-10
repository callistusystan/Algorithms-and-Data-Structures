#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int V1,V2,T,D; cin >> V1 >> V2 >> T >> D;
  ll ans = 0;
  for (int i=0;i<T;i++) {
    ans += min(V1+i*D, V2+(T-1-i)*D);
  }
  cout << ans << endl;
  return 0;
}
