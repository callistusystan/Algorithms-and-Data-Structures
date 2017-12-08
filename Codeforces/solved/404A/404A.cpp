#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<string> A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  bool can = true;
  if (A[0][0] == A[0][1]) can = false;
  for (int i=0;i<N;i++) {
    if (A[i][i] != A[0][0] || A[i][N-1-i] != A[0][0]) can = false;
  }
  for (int i=0;i<N;i++) {
    for (int j=0;j<N;j++) {
      if (i != j && i+j != N-1 && A[i][j] != A[0][1]) can = false;
    }
  }

  if (can) cout << "YES";
  else cout << "NO";
  cout << endl;
  return 0;
}
