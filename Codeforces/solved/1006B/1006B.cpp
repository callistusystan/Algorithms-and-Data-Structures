#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  priority_queue<pii> pq;
  for (int i=0;i<N;i++) {
    pii p; cin >> p.first;
    p.second = i;
    pq.push(p);
  }
  int ans = 0;
  vi order(K);
  for (int i=0;i<K;i++) {
    pii p = pq.top(); pq.pop();
    ans += p.first;
    order[i] = p.second;
  }
  cout << ans << endl;
  sort(order.begin(), order.end());
  for (int i=0;i<K;i++) {
    int prev = i ? order[i-1] : -1;
    if (i < K-1) cout << order[i] - prev << ' ';
    else cout << N-1-prev << endl;
  }
  return 0;
}
