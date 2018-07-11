#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

void solve() {
  int N, K; ll V; cin >> N >> K >> V;
  V--;
  priority_queue<pair<pii, string>, vector<pair<pii, string>>, greater<pair<pii, string>>> pq;
  for (int i=0;i<N;i++) {
    string s; cin >> s;
    pq.push({ { 0, i }, s });
  }
  int len_cycle = N*K/__gcd(N, K);
  int it = V%len_cycle;
  while (it--) {
    for (int i=0;i<K;i++) {
      auto top = pq.top(); pq.pop();
      pq.push({ { top.first.first+1, top.first.second }, top.second });
    }
  }
  vector<pair<int, string>> ans(K);
  for (int i=0;i<K;i++) {
    auto top = pq.top(); pq.pop();
    ans[i] = { top.first.second, top.second };
  }
  sort(ans.begin(), ans.end());
  for (int i=0;i<K;i++) cout << ' ' << ans[i].second;
  cout << endl;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  for (int t=1;t<=T;t++) {    
    cout << "Case #" << t << ":";
    solve();
  }
  return 0;
}
