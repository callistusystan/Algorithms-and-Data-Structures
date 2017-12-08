#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<ll> H(N), A(N);
  for (int i=0;i<N;i++) cin >> H[i];

  A[N-1] = H[N-1];
  for (int i=N-2;i>=0;i--) {
    A[i] = max(H[i], A[i+1]);
  }

  for (int i=0;i<N-1;i++) {
    cout << max(0LL, A[i+1]+1-H[i]) << " ";
  }
  cout << 0 << " " << endl;

  return 0;
}
