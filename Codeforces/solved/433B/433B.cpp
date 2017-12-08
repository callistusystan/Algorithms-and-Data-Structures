#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<ll> A(N), B(N);
  for (int i=0;i<N;i++) {
    cin >> A[i];
    B[i] = A[i];
  }
  sort(B.begin(), B.end());

  for (int i=1;i<N;i++) {
    A[i] += A[i-1];
    B[i] += B[i-1];
  }

  int M; cin >> M;
  for (int i=0;i<M;i++) {
    int t, l, r; cin >> t >> l >> r;
    l--; r--;
    if (t == 1) {
      cout << A[r] - (l ? A[l-1] : 0) << endl;
    } else {
      cout << B[r] - (l ? B[l-1] : 0) << endl;
    }
  }

  return 0;
}
