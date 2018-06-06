#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<string> A(3);
  for (int i=0;i<3;i++) cin >> A[i];
  if (A[0][0] == A[2][2] && A[0][1] == A[2][1] && A[0][2] == A[2][0] && A[1][2] == A[1][0]) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
