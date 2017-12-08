#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;

  if (N == 2) cout << 1 << endl << 2 << endl;
  else if (N == 3) cout << 1 << endl << 3 << endl;
  else {
    if (N%2) {
      cout << (N-3)/2 + 1 << endl;
      for (int i=0;i<(N-3)/2;i++) {
        cout << 2 << " ";
      }
      cout << 3 << endl;
    } else {
      cout << N/2 << endl;
      for (int i=0;i<N/2;i++) {
        if (i) cout << " ";
        cout << 2;
      }
      cout << endl;
    }
  }

  return 0;
}
