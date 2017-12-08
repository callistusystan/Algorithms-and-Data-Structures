#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  bool can = true;
  for (int i=0;i<N;i++) {
    if (A[i]%2) {
      if (i == N-1) {
        can = false;
      } else if (A[i+1] > 0) {
        A[i+1]--;
      } else {
        can = false;
        break;
      }
    }
  }

  if (can) cout << "YES";
  else cout << "NO";
  cout << endl;
  return 0;
}
