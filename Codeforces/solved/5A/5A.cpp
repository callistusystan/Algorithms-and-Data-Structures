#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S;
  set<string> online;
  int ans = 0;
  while (getline(cin, S)) {
    if (S[0] == '+') online.insert(S.substr(1));
    else if (S[0] == '-') online.erase(S.substr(1));
    else {
      string msg = S.substr(S.find(':')+1);
      ans += online.size()*msg.size();
    }
  }
  cout << ans << endl;
  return 0;
}
