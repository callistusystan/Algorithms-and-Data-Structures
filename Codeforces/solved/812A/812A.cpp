#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int L = 0, S = 1, R = 2, P = 3;

int mod(int a, int b) {
  return ((a%b)+b)%b;
}

int main() {
  vector<vi> A(10, vi(10));
  for (int i=0;i<4;i++)
    for (int j=0;j<4;j++)
      cin >> A[i][j];

  bool safe = true;
  for (int i=0;i<4;i++) {
    if (A[i][P] && (A[i][L] || A[i][S] || A[i][R])) safe = false;
    if (A[i][L] && A[mod(i-1, 4)][P]) safe = false;
    if (A[i][S] && A[mod(i+2, 4)][P]) safe = false;
    if (A[i][R] && A[mod(i+1, 4)][P]) safe = false;
  }
  if (!safe) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
