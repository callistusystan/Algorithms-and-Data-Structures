#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int A,B; cin >> A >> B;

  int a1,a2;
  a1 = min(A,B);
  A -= a1; B -= a1;
  a2 = max(A/2, B/2);

  cout << a1 << " " << a2 << endl;

  return 0;
}
