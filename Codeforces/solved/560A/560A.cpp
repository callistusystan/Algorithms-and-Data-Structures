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

  sort(A.begin(), A.end());

  if (A[0] == 1) cout << -1;
  else {
    cout << 1;
  }
  cout << endl;

  return 0;
}
