#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i];
  }

  int gcd = __gcd(A[0], A[1]);

  for (int i=2;i<N;i++) {
    gcd = __gcd(gcd, A[i]);
  }

  bool can = true;
  for (int i=0;i<N;i++) {
    A[i]/=gcd;
    while (A[i]%2 == 0) A[i]/=2;
    while (A[i]%3 == 0) A[i]/=3;
    if (A[i] != 1) can = false;
  }

  if (can) cout << "Yes";
  else cout << "No";
  cout << endl;

  return 0;
}
