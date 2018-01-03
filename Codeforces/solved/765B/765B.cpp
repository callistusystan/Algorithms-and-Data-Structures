#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  char cur = 'a';
  for (char c : S) {
    if (c > cur) {
      cout << "NO\n";
      return 0;
    } else if (c == cur) cur++;
  }
  cout << "YES\n";
  return 0;
}
