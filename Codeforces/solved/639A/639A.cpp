#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,K,Q; cin >> N >> K >> Q;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  priority_queue<pii, vector<pii>, greater<pii>> pq;
  vi isIn(N);
  while (Q--) {
    int a,b; cin >> a >> b;
    b--;
    if (a == 1) {
      isIn[b] = 1;
      pq.push({A[b], b});
      if ((int)pq.size() > K) {
        isIn[pq.top().second] = 0; pq.pop();
      }
    } else {
      if (isIn[b]) cout << "YES\n";
      else cout << "NO\n";
    }
  }
  return 0;
}
