#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<pii> A(M);
  for (int i=0;i<M;i++) cin >> A[i].first >> A[i].second;
  int ans = max(A[0].second+A[0].first-1, A.back().second+N-A.back().first);
  for (int i=0;i+1<M;i++) {
    ans = max(ans, max(A[i].second, A[i+1].second));
    int gap = A[i+1].first - A[i].first;
    int need = abs(A[i+1].second - A[i].second);
    if (need > gap) {
      cout << "IMPOSSIBLE\n";
      return 0;
    }
    ans = max(ans, max(A[i].second, A[i+1].second) + (gap-need)/2);
  }
  cout << ans << endl;
  return 0;
}
