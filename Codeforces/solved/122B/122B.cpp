#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int n4, n7;
  n4 = count(S.begin(), S.end(), '4');
  n7 = count(S.begin(), S.end(), '7');
  if (n4 == 0 && n7 == 0) cout << "-1\n";
  else if (n4 >= n7) cout << "4\n";
  else cout << "7\n";
  return 0;
}
