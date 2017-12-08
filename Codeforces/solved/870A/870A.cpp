#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vi A(N), B(M);
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<M;i++) cin >> B[i];

  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  
  for (int i=0;i<N;i++) {
    if (find(B.begin(), B.end(), A[i]) != B.end()) {
      cout << A[i] << endl;
      return 0;
    }
  }

  if (A[0] == B[0]) cout << A[0];
  else if (A[0] < B[0]) cout << A[0] << B[0];
  else cout << B[0] << A[0];
  cout << endl;
  return 0;
}
