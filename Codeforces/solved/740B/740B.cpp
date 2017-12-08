#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vi A(N+5);
  for (int i=1;i<=N;i++) {
    cin >> A[i];
    A[i] += A[i-1];
  }
  int ans = 0;
  for (int i=0;i<M;i++) {
    int l,r; cin >> l >> r;
    ans += max(0, A[r]-A[l-1]);
  }
  cout << ans << endl;
  return 0;
}
