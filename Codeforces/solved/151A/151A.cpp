#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,K,L,C,D,P,NL,NP;
  cin >> N>>K>>L>>C>>D>>P>>NL>>NP;

  int LIQUID = K*L;
  int LIMES = C*D;
  int SALT = P;

  int ans = LIQUID/(N*NL);
  ans = min(ans, LIMES/N);
  ans = min(ans, SALT/(N*NP));

  cout << ans << endl;


  return 0;
}
