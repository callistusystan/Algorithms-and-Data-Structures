#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S, T; cin >> S >> T;
  if (S == T 
      || (S.size() == T.size() && count(S.begin(), S.end(), '1') && count(T.begin(), T.end(), '1'))
      ) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
