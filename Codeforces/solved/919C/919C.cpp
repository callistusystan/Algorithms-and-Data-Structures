#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M,K; cin >> N >> M >> K;
  vector<string> A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  ll ans = 0;
  if (K == 1) {
    for (string &v: A) {
      ans += count(v.begin(), v.end(), '.');
    }
    cout << ans << endl;
    return 0;
  }
  for (int i=0;i<N;i++) {
    int cnt = 0;
    for (int j=0;j<M;j++) {
      if (A[i][j] == '*') cnt = 0;
      else cnt++;
      if (cnt >= K) ans++;
    }
  }
  for (int j=0;j<M;j++) {
    int cnt = 0;
    for (int i=0;i<N;i++) {
      if (A[i][j] == '*') cnt = 0;
      else cnt++;
      if (cnt >= K) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
