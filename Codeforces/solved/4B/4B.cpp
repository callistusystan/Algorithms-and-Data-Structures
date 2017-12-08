#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int D, S; cin >> D >> S;
  vi A(D), B(D);
  for (int i=0;i<D;i++) {
    cin >> A[i] >> B[i];
    B[i] -= A[i];
    S -= A[i];
  }
  if (S < 0) cout << "NO";
  else {
    for (int i=0;i<D;i++) {
      if (S == 0) break;
      int canPut = min(B[i], S);
      A[i] += canPut;
      S -= canPut;
    }

    if (S) {
      cout << "NO";
    } else {
      cout << "YES" << endl;
      for (int i=0;i<D;i++) {
        cout << A[i] << " ";
      }
    }
  }
  cout << endl;

  return 0;
}
