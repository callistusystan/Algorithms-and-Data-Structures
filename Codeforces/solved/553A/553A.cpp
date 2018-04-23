#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int MOD = 1e9+7;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<vi> choose(1005, vi(1005, 1));
  for (int i=1;i<1005;i++) {
    choose[i][0] = 1;
    choose[i][i] = 1;
    for (int j=1;j<i;j++) {
      choose[i][j] = (choose[i-1][j-1]+choose[i-1][j])%MOD;
    }
  }

  int K; cin >> K;
  vi cnt(K);
  for (int i=0;i<K;i++) cin >> cnt[i];

  ll ans = 1;
  int total = 0;
  for (int i=0;i<K;i++) {
    ans = (ans*choose[total+cnt[i]-1][cnt[i]-1])%MOD;
    total += cnt[i];
  }
  cout << ans << endl;
  return 0;
}
