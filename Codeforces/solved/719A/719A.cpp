#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  if (N == 1) {
    if (A[0] == 0) cout << "UP";
    else if (A[0] == 15) cout << "DOWN";
    else cout << -1;
  } else {
    if (A[N-1] == 0 || A[N-1] == 15) {
      if (A[N-1] -A[N-2] < 0) cout << "UP";
      else cout << "DOWN";
    } else {
      if (A[N-1] -A[N-2] < 0) cout << "DOWN";
      else cout << "UP";
    }
  }
  cout << endl;

  return 0;
}
