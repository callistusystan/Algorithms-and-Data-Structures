#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A,B,C; cin >> A >> B >> C;
  ll prod = (ll)sqrt(A*B*C);
  while (prod*prod <= A*B*C) prod++;
  while (prod*prod > A*B*C) prod--;

  ll a,b,c;
  a = prod/A;
  b = prod/B;
  c = prod/C;

  cout << 4*a+4*b+4*c << endl;
  return 0;
}
