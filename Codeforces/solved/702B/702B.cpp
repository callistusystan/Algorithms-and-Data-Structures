#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  map<int, int> cnt;
  ll ans = 0;
  for (int i=0;i<N;i++) {
    for (ll j=2;j<=(1LL<<32);j<<=1) ans += cnt[j-A[i]];
    cnt[A[i]]++;
  }
  cout << ans << endl;
  return 0;
}
