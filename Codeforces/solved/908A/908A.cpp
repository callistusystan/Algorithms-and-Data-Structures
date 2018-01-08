#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  string A = "aeiou13579";
  int ans = 0;
  for (char c: S) {
    if (A.find(c) != string::npos) ans++;
  }
  cout << ans << endl;
  return 0;
}
