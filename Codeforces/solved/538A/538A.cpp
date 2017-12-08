#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  bool can = false;
  if (S == "CODEFORCES") {
    can = true;
  }
  for (int i=0;i<N;i++) {
    for (int j=i;j<N;j++) {
      if (S.substr(0,i) + S.substr(j+1) == "CODEFORCES") can = true;
    }
  }
  if (can) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
