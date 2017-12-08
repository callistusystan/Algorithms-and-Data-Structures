#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int K; cin >> K;
  vi A(12);
  for (int i=0;i<12;i++) cin >> A[i];
  sort(A.begin(), A.end());
  reverse(A.begin(), A.end());
  int i, G = 0;
  for (i=0;i<12;i++) {
    if (G >= K) break;
    G += A[i];
  }

  if (G >= K) cout << i << endl;
  else cout << -1 << endl;

  return 0;
}
