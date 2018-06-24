#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

string rnk = "6789TJQKA";

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  char best; cin >> best;
  string c1, c2; cin >> c1 >> c2;
  if (c1[1] == best && c2[1] != best) cout << "YES\n";
  else if (c1[1] != best && c2[1] == best) cout << "NO\n";
  else if (c1[1] == c2[1] && rnk.find(c1[0]) > rnk.find(c2[0])) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
