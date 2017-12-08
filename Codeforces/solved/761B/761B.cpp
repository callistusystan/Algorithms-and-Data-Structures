#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, L; cin >> N >> L;
  vi A(N+5), B(N+5);
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<N;i++) cin >> B[i];
  A[N] = A[0]+L;
  B[N] = B[0]+L;
  vi C(N+5), D(N+5);
  for (int i=0;i<N;i++) {
    C[i] = A[i+1]-A[i];
    D[i] = B[i+1]-B[i];
  }
  for (int i=0;i<N;i++) {
    bool same = true;
    for (int j=0;j<N;j++) {
      same = same && (C[j] == D[(i+j)%N]);
    }
    if (same) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}
