#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

void solve() {
  int N; cin >> N;
  priority_queue<pii, vector<pii>, greater<pii>> pq;
  vi leave(N);
  for (int i=0;i<N;i++) {
    int li; cin >> li >> leave[i];
    pq.push({ li, i });
  }
  vi ans(N);
  int cur = 0;
  while (!pq.empty()) {
    pii top = pq.top(); pq.pop();
    cur = max(cur, top.first);
    if (cur <= leave[top.second]) {
      ans[top.second] = cur;
      cur++;
    }
  }
  for (int i : ans) cout << i << " ";
  cout << endl;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) solve();
  return 0;
}
