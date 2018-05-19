#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,K; cin >> N >> K;
  vi A(N+1);
  for (int i=1;i<=N;i++) cin >> A[i];
  priority_queue<pii> pq;
  ll ans=0, cost=0;
  for (int i=1;i<=K;i++) {
  pq.push({ A[i], i });
  ans += cost;
  cost += A[i];
  }
  vi schedule(N+1);
  for (int i=K+1;i<=K+N;i++) {
    ans += cost;
    if (i <= N) {
      pq.push({ A[i], i });
      cost += A[i];
    }
    pii top = pq.top(); pq.pop();
    schedule[top.second] = i;
    cost -= top.first;
  }
  cout << ans << endl;
  for (int i=1;i<=N;i++) cout << schedule[i] << " ";
  cout << endl;
  return 0;
}
