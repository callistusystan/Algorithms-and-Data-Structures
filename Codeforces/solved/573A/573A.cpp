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
    while (A[i]%2 == 0) A[i] /= 2;
    while (A[i]%3 == 0) A[i] /= 3;
  }

  bool can = true;
  for (int i=1;i<N;i++) {
    if (A[i] != A[i-1]) can = false;
  }

  if (can) cout << "Yes";
  else cout << "No";
  cout << endl;

  return 0;
}
