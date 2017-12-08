#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll L,R; cin >> L >> R;

  if (L%2) L++;

  if (R-L+1 < 3) {
    cout << -1;
  } else {
    cout << L << " " << L + 1 << " " << L + 2;
  }
  cout << endl;
  return 0;
}
