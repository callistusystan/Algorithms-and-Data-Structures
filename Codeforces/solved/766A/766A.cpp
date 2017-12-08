#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S1, S2; cin >> S1 >> S2;

  if (S1 == S2) cout << -1;
  else cout << max(S1.size(), S2.size());
  cout << endl;

  return 0;
}
