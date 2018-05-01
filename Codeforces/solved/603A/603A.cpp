#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N; 
string S;
vector<vector<vi>> memo(1e5+5, vector<vi>(2, vi(3, -1)));

int rec(int cur, int need, int pos) {
  if (cur == N) return 0;
  else if (memo[cur][need][pos] != -1) return memo[cur][need][pos];
  int ans = 0;
  if (pos == 0) {
    if (S[cur]-'0' == need) ans = 1+max(ans, rec(cur+1, 1-need, pos));
    else ans = max(ans, rec(cur+1, need, pos));
  } else if (pos == 1) {
    if (S[cur]-'0' != need) ans = 1+max(ans, rec(cur+1, 1-need, pos));
    else ans = max(ans, rec(cur+1, need, pos));
  } else {
    if (S[cur]-'0' == need) ans = 1+max(ans, rec(cur+1, 1-need, pos));
    else ans = max(ans, rec(cur+1, need, pos));
  }
  if (pos < 2) ans = max(ans, rec(cur, need, pos+1));
  return memo[cur][need][pos] = ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> S;
  cout << max(rec(0, 0, 0), rec(0, 1, 0)) << endl;
  return 0;
}
