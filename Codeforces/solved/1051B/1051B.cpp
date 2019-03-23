#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll L, R; cin >> L >> R;
  cout << "YES\n";
  for (ll i=L;i<R;i+=2) {
    cout << i << " " << i+1 << endl;
  }
  return 0;
}
