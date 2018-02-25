#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

void solve() {
  int N,K; cin >> N >> K;
  vi A(K), B(N);
  for (int i=0;i<K;i++) {
    cin >> A[i];
    A[i]--;
  }
  for (int i=1;i<=N+5;i++) {
    for (int j=0;j<K;j++) {
      B[max(0, A[j]-i+1)] = 1;
      B[min(N-1, A[j]+i-1)] = 1;
    }
    if (count(B.begin(), B.end(), 1) == N) {
      cout << i << endl;
      return;
    }
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) solve();
  return 0;
}
