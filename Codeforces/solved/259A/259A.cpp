#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i=0;i<8;i++) {
    string s; cin >> s;
    for (int j=0;j<7;j++) {
      if (s[j] == s[j+1]) {
        cout << "NO\n";
        return 0;
      }
    }
  }
  cout << "YES\n";
  return 0;
}
