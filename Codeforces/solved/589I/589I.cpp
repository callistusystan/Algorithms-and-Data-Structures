#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  vi cnt(105);
  for (int i=0;i<N;i++) {
    int ci; cin >> ci;
    cnt[ci]++;
  }
  int ans = 0;
  for (int i=0;i<=100;i++) {
    if (cnt[i] > N/K) ans += cnt[i]-N/K;
  }
  cout << ans << endl;
  return 0;
}
