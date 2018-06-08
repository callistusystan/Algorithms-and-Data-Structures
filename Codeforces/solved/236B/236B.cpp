#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int MOD = 1073741824;
vi memo(1e6+5, -1);

ll D(int x) {
  int cur = x;
  if (memo[x] != -1) return memo[x];
  map<int, int> cnt;
  for (int i=2;i*i<=cur;i++) {
    while (cur%i == 0) {
      cnt[i]++;
      cur /= i;
    }
  }
  if (cur > 1) cnt[cur]++;
  ll nDiv = 1;
  for (auto p : cnt) nDiv *= p.second+1;
  return memo[x] = nDiv%MOD;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int A,B,C; cin >> A >> B >> C;
  int ans = 0;
  for (int i=1;i<=A;i++) 
    for (int j=1;j<=B;j++) 
      for (int k=1;k<=C;k++) ans = ((ll)ans + D(i*j*k))%MOD;
  cout << ans << endl;
  return 0;
}
