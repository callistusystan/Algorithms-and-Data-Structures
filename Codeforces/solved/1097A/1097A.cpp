#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string A; cin >> A;
  for (int i=0;i<5;i++) {
    string B; cin >> B;
    if (B[0] == A[0] || B[1] == A[1]) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}
