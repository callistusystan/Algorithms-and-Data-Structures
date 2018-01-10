#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,K; cin >> N >> K;
  int ans = 0;
  for (int i=0;i<N;i++) {
    string si; cin >> si;
    vi seen(10);
    for (char c: si) seen[c-'0']=1;
    bool can = true;
    for (int i=0;i<10;i++) {
      if ((i<=K && !seen[i]))
          can = false;
    }
    if (can) ans++;
  }
  cout << ans << endl;
  return 0;
}
