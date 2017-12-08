#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll T,S,X; cin >> T >> S >> X;

  if (X < T+S) {
    if (X == T) cout << "YES";
    else cout << "NO";
  } else {
    X -= T;
    if (X%S == 0 || (X-1)%S == 0)  {
      cout << "YES";
    } else {
      cout << "NO";
    }
  }
  cout << endl;

  return 0;
}
