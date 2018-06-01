#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int MOD = 1e9+7;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M ; cin >> N >> M ;
  set<int> chars[M];
  for (int i=0;i<N;i++) {
    string si; cin >> si;
    for (int j=0;j<M;j++) chars[j].insert(si[j]);
  }
  ll ans = 1;
  for (int i=0;i<M;i++) ans = (ans*chars[i].size())%MOD;
  cout << ans << endl;
  return 0;
}
