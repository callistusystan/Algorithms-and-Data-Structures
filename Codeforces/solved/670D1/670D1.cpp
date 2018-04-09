#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,K; cin >> N >> K;
  vi A(N), B(N);
  for (int i=0;i<N;i++) cin >> A[i];
  int mn = -1;
  for (int i=0;i<N;i++) {
    cin >> B[i];
    if (mn == -1 || B[i]/A[i] < mn)
      mn = B[i]/A[i];
  }
  for (int i=0;i<N;i++) B[i] -= mn*A[i];
  while (K > 0) {
    for (int i=0;i<N;i++) {
      B[i] -= A[i];
      if (B[i] < 0) {
        K += B[i];
        B[i] = 0;
      }
    }
    if (K >= 0) mn++;
  }
  cout << mn << endl;
  return 0;
}
