#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<vi> A(N, vi(10));
  for (int i=0;i<N;i++) for (int j=0;j<6;j++) {
    int d; cin >> d;
    A[i][d] = 1;
  }
  int cur = 1;
  while (1) {
    bool can = false;
    vi perm(N); for (int i=0;i<N;i++) perm[i] = i;
    do {
      int x = cur;
      bool res = true;
      for (int i=0;i<N && x;i++) {
        if (!A[perm[i]][x%10]) res = false;
        x /= 10;
      }
      can |= res;
    } while (next_permutation(perm.begin(), perm.end()));
    if (!can) break;
    cur++;
  }
  cout << cur-1 << endl;
  return 0;
}
