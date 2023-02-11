#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int N, K; cin >> N >> K;
    vi A(N), B(N);
    for (int i=0;i<N;i++) cin >> A[i];
    for (int i=0;i<N;i++) cin >> B[i];
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    for (int i=0;i<K;i++) {
      if (A[i] < B[N-1-i]) A[i] = B[N-1-i];
    }
    int sum = 0;
    for (int i=0;i<N;i++) sum += A[i];
    cout << sum << endl;
  }
  return 0;
}
