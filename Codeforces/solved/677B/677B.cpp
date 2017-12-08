#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, H, K; cin >> N >> H >> K;
  vector<ll> A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  ll cur = 0, ans = 0;
  for (int i=0;i<N-1;i++) {
    cur += A[i];
    ll j = (cur+A[i+1]-H+K-1)/K;
    j = max(j, 0LL);
    ans += j;
    cur -= j*K;
    cur = max(cur, 0LL);
  }
  cur += A[N-1];
  ans += (cur+K-1)/K;
  cout << ans << endl;
  return 0;
}
