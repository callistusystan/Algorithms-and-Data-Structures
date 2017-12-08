#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<ll> A(N), pre(N);
  for (int i=0;i<N;i++) {
    cin >> A[i];
  }

  sort(A.begin(), A.end());
  for (int i=0;i<N;i++) {
    pre[i] = A[i];
    if (i) pre[i] += pre[i-1];
  }

  ll ans = pre[N-1];
  for (int i=0;i<=N-2;i++) {
    ans += pre[N-1] - (i==0?0:pre[i-1]);
  }
  cout << ans << endl;

  return 0;
}
