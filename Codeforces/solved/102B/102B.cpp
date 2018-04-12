#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int getSum(string S) {
  int ans = 0;
  for (char c : S) ans += c-'0';
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int ans = 0;
  while (S.size() > 1) {
    ans++;
    S = to_string(getSum(S));
  }
  cout << ans << endl;
  return 0;
}
