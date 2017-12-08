#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int A,B; cin >> A >> B;
  if (abs(A-B) <= 1) cout << "YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
