#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N); priority_queue<pii, vector<pii>, greater<pii>> pq;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    pq.push({A[i], i});
  }
  vector<pii> ans;
  for (int i=0;i<N;i++) {
    pii top = pq.top(); pq.pop();
    while (A[top.second] != top.first) {
      top = pq.top(); pq.pop();
    }
    if (A[i] != top.first) {
      ans.push_back({i, top.second});
      pq.push({A[i], top.second});
      swap(A[i], A[top.second]);
    }
  }

  cout << ans.size() << endl;
  for (pii p : ans) cout << p.first << " " << p.second << endl;
  return 0;
}
