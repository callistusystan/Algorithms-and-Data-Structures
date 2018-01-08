#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M; cin >> N >> M;
  int ans = -1;
  for (int i=0;i<N;i++) {
    int cheapest = 2e9;
    for (int j=0;j<M;j++) {
      int aij; cin >> aij;
      cheapest = min(cheapest, aij);
    }
    ans = max(ans, cheapest);
  }
  cout << ans << endl;
  return 0;
}
