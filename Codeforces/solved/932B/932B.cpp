#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi memo(1e6+5, -1);
ll ps[10][(int)1e6+5];

int f(int cur) {
  string s = to_string(cur);
  int ans = 1;
  for (char c : s) ans *= max(1, c-'0');
  return ans;
}

int g(int cur) {
  if (cur < 10) return cur;
  else if (memo[cur] != -1) return memo[cur];
  return memo[cur] = g(f(cur));
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i=1;i<=1e6;i++) g(i);
  for (int k=1;k<=9;k++) {
    for (int i=1;i<=1e6;i++) {
      if (g(i) == k) ps[k][i] = 1;
      ps[k][i] += ps[k][i-1];
    }
  }
  int Q; cin >> Q;
  while (Q--) {
    int l,r,k; cin >> l >> r >> k;
    cout << ps[k][r] - ps[k][l-1] << endl;
  }
  return 0;
}
