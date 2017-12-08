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
  for (int i=0;i<N;i++) {
    for (int j=0;j<N;j++) {
      if (j%2) A[j]--;
      else A[j]++;
      A[j] %= N;
      if (A[j] < 0) A[j] += N;
    }

    bool can = true;
    for (int j=0;j<N;j++) {
      if (A[j] != j) {
        can = false;
        break;
      }
    }
    if (can) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;

  return 0;
}
