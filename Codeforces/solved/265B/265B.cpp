#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;++i) cin >> A[i];

  ll ans, cur;
  ans = cur = 0;
  for (int i=0;i<N;i++) {
    ans += abs(A[i]-cur) + 1;
    cur = A[i];
    if (i < N-1) ans++;
  }
  cout << ans << endl;

  return 0;
}
