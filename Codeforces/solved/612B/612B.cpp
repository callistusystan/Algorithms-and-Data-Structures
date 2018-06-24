#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi pos(2e5+5);
  for (int i=0;i<N;i++) {
    int x; cin >> x;
    pos[x] = i;
  }
  ll ans = 0;
  for (int i=1;i+1<=N;i++) ans += abs(pos[i+1]-pos[i]); 
  cout << ans << endl;
  return 0;
}
