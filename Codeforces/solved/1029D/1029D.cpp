#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, K; cin >> N >> K;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  sort(A.begin(), A.end());

  map<int, vi> remainderCnt;
  for (int i=0;i<N;i++) {
    if (remainderCnt[A[i]%K].size() == 0) remainderCnt[A[i]%K].resize(25);
    remainderCnt[A[i]%K][to_string(A[i]).size()]++;
  }

  ll ans = 0;
  for (int i=0;i<N;i++) {
    int len = to_string(A[i]).size();
    ll r = A[i]%K;
    for (int j=1;j<=10;j++) {
      r *= 10;
      int need = (K-(r%K))%K;
      ans += remainderCnt[need].size() ? remainderCnt[need][j] : 0;
      if (A[i]%K == need && len == j && remainderCnt[need].size()) ans--;
    }
  }
  cout << ans << endl;  
  return 0;
}
