#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M,K; cin >> N >> M >> K;
  vi A(N), pos(N+1);
  for (int i=0;i<N;i++) {
    cin >> A[i];
    pos[A[i]] = i;
  }
  ll ans = 0;
  while (M--) {
    int bi; cin >> bi;
    ans += pos[bi]/K+1;
    if (pos[bi]) {
      int left = A[pos[bi]-1];
      swap(A[pos[bi]], A[pos[left]]);
      pos[bi]--;
      pos[left]++;
    }
  }
  cout << ans << endl;
  return 0;
}
