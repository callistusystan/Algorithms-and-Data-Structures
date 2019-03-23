#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi A(3);
  for (int i=0;i<3;i++) cin >> A[i];
  sort(A.begin(), A.end());
  cout << max(0, A[2]+1 - A[1] - A[0]) << endl;
  return 0;
}
