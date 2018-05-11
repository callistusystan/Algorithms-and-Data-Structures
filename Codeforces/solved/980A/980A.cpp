#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  int pearls = count(S.begin(), S.end(), 'o');
  int links = N - pearls;
  if (pearls == 0) cout << "YES\n";
  else if (links%pearls) cout << "NO\n";
  else cout << "YES\n";
  return 0;
}
