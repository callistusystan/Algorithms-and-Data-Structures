#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S,T;
  cin >> S >> T;
  reverse(T.begin(), T.end());

  if (S == T) cout << "YES";
  else cout << "NO";
  cout << endl;
  
  return 0;
}
