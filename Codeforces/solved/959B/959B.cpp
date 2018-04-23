#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K, M; cin >> N >> K >> M;
  vector<string> words(N+1);
  for (int i=1;i<=N;i++) cin >> words[i];
  vi wordCost(N+1);
  for (int i=1;i<=N;i++) cin >> wordCost[i];
  map<string, int> wordGroup;
  vi groupCost(K, 1e9);
  for (int i=0;i<K;i++) {
    int x; cin >> x;
    while (x--) {
      int j; cin >> j;
      wordGroup[words[j]] = i;
      groupCost[i] = min(groupCost[i], wordCost[j]);
    }
  }
  ll ans = 0;
  while (M--) {
    string s; cin >> s;
    ans += groupCost[wordGroup[s]];
  }
  cout << ans << endl;
  return 0;
}
