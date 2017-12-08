#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  vi A(N), B(N);
  vector<bool> bought(N);
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<N;i++) cin >> B[i];

  priority_queue<pii, vector<pii>, greater<pii>> pq;
  for (int i=0;i<N;i++) {
    pq.push({ A[i]-B[i], i });
  }

  ll ans = 0;
  for (int i=0;i<N;i++) {
    pii top = pq.top(); pq.pop();
    if (i >= K && top.first > 0) break;
    ans += A[top.second];
    bought[top.second] = true;
  }

  for (int i=0;i<N;i++) {
    if (!bought[i]) ans += B[i];
  }

  cout << ans << endl;

  return 0;
}
