#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int Q; cin >> Q;
  while (Q--) {
    int a,b,c,d; cin >> a >> b >> c >> d;
    if (a < c) cout << a << " " << d << endl;
    else cout << b << " " << c << endl;    
  }
  return 0;
}
