#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M ;
  vi A(N), B(N);
  priority_queue<pii> pq;
  ll sum = 0;
  for (int i=0;i<N;i++) {
    cin >> A[i] >> B[i];
    sum += A[i];
    pq.push({ A[i] - B[i], i });
  }
  int ans = 0;
  while (pq.size() && sum > M) {
    ans++;
    pii p = pq.top(); pq.pop();
    sum -= p.first;
  }
  if (pq.empty() && sum > M) cout << "-1\n";
  else cout << ans << endl; 
  return 0;
}
