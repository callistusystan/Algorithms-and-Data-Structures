#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  ll ans = 0;
  while (M--) {
    int i,j; cin >> i >> j;
    i--; j--;
    ans += min(A[i],A[j]);
  }
  cout << ans << endl;
  return 0;
}
