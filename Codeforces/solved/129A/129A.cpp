#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  int sum = 0, nEven = 0;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    sum += A[i];
    if (A[i]%2 == 0) nEven++;
  }

  int nOdd = N - nEven;

  if (sum%2) cout << nOdd << endl;
  else cout << nEven << endl;

  return 0;
}
