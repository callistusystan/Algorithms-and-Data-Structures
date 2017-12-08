#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A,B,C;
  cin >> A >> B >> C;

  if (C == 0) {
    if (A == B) cout << "YES";
    else cout << "NO";
  } else {
    ll N = (B-A)/C + 1;
    if (N >= 1 && A + (N-1)*C == B) {
      cout << "YES";
    } else {
      cout << "NO";
    }
  }

  cout << endl;

  return 0;
}
