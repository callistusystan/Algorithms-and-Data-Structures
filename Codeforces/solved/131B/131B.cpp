#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  map<int, ll> cnt;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    cnt[ai]++;
  }
  ll ans = 0;
  for (auto p : cnt) {
    if (p.first < 0) continue;
    if (p.first == 0) ans += p.second*(p.second-1)/2;
    else ans += cnt[p.first]*cnt[-p.first];
  }
  cout << ans << endl;
  return 0;
}
