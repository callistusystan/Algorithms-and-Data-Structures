#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  priority_queue<pii> pq;
  int cur;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    if (i == 0) cur = ai;
    else pq.push({ai, i});
  }

  int ans = 0;
  while (cur <= pq.top().first) {
    pii p = pq.top(); pq.pop();
    pq.push({p.first - 1, p.second});
    cur++;
    ans++;
  }
  cout << ans << endl;

  return 0;
}
