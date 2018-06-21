#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi P(N), A(N), B(N), used(N);
  for (int i=0;i<N;i++) cin >> P[i];
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<N;i++) cin >> B[i];
  vector<priority_queue<pii, vector<pii>, greater<pii>>> pq(4);
  for (int i=0;i<N;i++) {
    pq[A[i]].push({ P[i], i });
    pq[B[i]].push({ P[i], i });
  }
  int M; cin >> M;
  while (M--) {
    int c; cin >> c;
    while (pq[c].size() && used[pq[c].top().second]) pq[c].pop();
    if (pq[c].size()) {
      pii p = pq[c].top(); pq[c].pop();
      cout << p.first << " ";
      used[p.second] = 1;
    } else cout << "-1 ";
  }
  cout << endl;
  return 0;
}
