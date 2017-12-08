#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  priority_queue<pii, vector<pii>, greater<pii>> pq;
  int ans = 0;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    ans += ai/10;
    if (ai != 100)
      pq.push({ 10-(ai%10), ai });
  }
  while (K > 0 && !pq.empty()) {
    pii top = pq.top(); pq.pop();
    if (K < top.first) break;
    ans++;
    K -= top.first;
    if (top.second + top.first != 100) {
      pq.push({ 10, top.second+top.first });
    }
  }
  cout << ans << endl;
  return 0;
}
