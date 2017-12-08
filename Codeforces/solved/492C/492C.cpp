#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, R, AVG; cin >> N >> R >> AVG;
  vector<pii> A(N);
  for (int i=0;i<N;i++) cin >> A[i].second >> A[i].first;
  sort(A.begin(), A.end());
  ll need = (ll)N*AVG;
  for (int i=0;i<N;i++) need -= A[i].second;
  ll ans = 0;
  for (int i=0;i<N;i++) {
    if (need <= 0) break;
    ll canGet = min((ll)R-A[i].second, need);
    ans += canGet*A[i].first;
    need -= canGet;
  }
  cout << ans << endl;
  return 0;
}
