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
  if (A[0] == 1) cout << "YES\n";
  else if (A[0] == 2 && A[1] == 2) cout << "YES\n";
  else if (A[0] == 2 && A[1] == 4 && A[2] == 4) cout << "YES\n";
  else if (A[0] == 3 && A[2] == 3) cout << "YES\n";
  else cout << "NO\n";  
  return 0;
}
