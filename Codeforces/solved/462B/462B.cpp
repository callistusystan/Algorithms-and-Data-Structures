#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  string S; cin >> S;
  vector<ll> freq(26);
  for (int i=0;i<N;i++) freq[S[i]-'A']++;
  sort(freq.begin(), freq.end());

  int i = 25;
  ll ans = 0;
  while (K && i >= 0) {
    ll canTake = min((ll)K, freq[i]);
    K -= canTake;
    ans += canTake * canTake;
    i--;
  }
  cout << ans << endl;
  return 0;
}
