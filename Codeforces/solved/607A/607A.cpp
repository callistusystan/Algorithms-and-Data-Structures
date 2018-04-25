#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<pii> A(N), ps(N);
  for (int i=0;i<N;i++) cin >> A[i].first >> A[i].second;
  sort(A.begin(), A.end());
  for (int i=0;i<N;i++) {
    ps[i].first = A[i].first;
    pii x = { ps[i].first-A[i].second, 0 };
    int j = lower_bound(A.begin(), A.end(), x) - A.begin();
    if (i != j) ps[i].second = i-j;
    if (j) ps[i].second += ps[j-1].second;
  }
  int ans = ps[N-1].second;
  for (int i=0;i<N;i++) {
    int destroyed = i + ps[N-1-i].second;
    ans = min(ans, destroyed);
  }
  cout << ans << endl;
  return 0;
}
