#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<ll, ll> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<pii> A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i].first >> A[i].second;
  }
  int M; cin >> M;
  vector<pii> B(M);
  for (int i=0;i<M;i++) {
    cin >> B[i].first >> B[i].second;
  }
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());

  ll ans = 0;
  for (int i=0;i<N;i++) {
    ans = max(ans, B[M-1].first - A[i].second);
  }

  for (int i=0;i<M;i++) {
    ans = max(ans, A[N-1].first - B[i].second);
  }

  cout << ans << endl;

  return 0;
}
