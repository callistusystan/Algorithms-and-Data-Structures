#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, K; cin >> N >> K;
  vi A(N), len(N);
  for (int i=0;i<N;i++) {
    cin >> A[i];
    len[i] = to_string(A[i]).size();
  }

  map<int, vi> remainderCnt;
  for (int i=0;i<N;i++) {
    if (remainderCnt[A[i]%K].size() == 0) remainderCnt[A[i]%K].resize(25);
    remainderCnt[A[i]%K][len[i]]++;
  }

  ll ans = 0;
  for (int i=0;i<N;i++) {
    ll r = A[i]%K;
    for (int j=1;j<=10;j++) {
      r = ((r%K)*10)%K;
      int need = (K-(r%K))%K;
      if (!remainderCnt.count(need)) continue;
      vi &v = remainderCnt[need];
      ans += v.size() ? v[j] : 0;
      if (A[i]%K == need && len[i] == j && v.size()) ans--;
    }
  }
  cout << ans << endl;  
  return 0;
}
