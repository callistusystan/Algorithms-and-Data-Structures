#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, X; cin >> N >> X;
  vi freq(1e6);
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    freq[ai]++;
  }
  ll ans = 0;
  for (int i=0;i<1e6;i++) {
    if (freq[i] == 0 || (i^X) < i) continue;
    int j = i^X;
    if (i == j) ans += (ll)freq[i]*(freq[i]-1)/2;
    else ans += (ll)freq[i]*freq[j];
  }
  cout << ans << endl;
  return 0;
}
