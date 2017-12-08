#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int L = N*2 + 1;
  int M = L/2;

  int A,B;
  A = B = M;
  for (int i=0;i<L;i++) {
    int cur = 0;
    for (int j=0;j<L;j++) {
      if (j > B) break;
      if (j) cout << " ";
      if (A <= j && j <= B) {
        cout << cur;
        if (j < M) cur ++;
        else cur --;
      } else {
        cout << " ";
      }
    }
    cout << endl;
    if (i < M) {
      A--;
      B++;
    } else {
      A++;
      B--;
    }
  }

  return 0;
}
