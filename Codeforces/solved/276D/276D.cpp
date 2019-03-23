#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi L_bin, R_bin;
ll memo[70][2][2][2][2];

ll rec(int pos, bool fl1, bool fr1, bool fl2, bool fr2) {
  if (pos == (int)L_bin.size()) return 0;
  else if (memo[pos][fl1][fr1][fl2][fr2] != -1) return memo[pos][fl1][fr1][fl2][fr2];
  
  int mn1 = 0, mx1 = 1, mn2 = 0, mx2 = 1;
  if (fl1 == 0 && L_bin[pos] == 1) mn1 = 1;
  if (fr1 == 0 && R_bin[pos] == 0) mx1 = 0;
  if (fl2 == 0 && L_bin[pos] == 1) mn2 = 1;
  if (fr2 == 0 && R_bin[pos] == 0) mx2 = 0;
  
  ll ans = 0;
  for (int i=mn1;i<=mx1;i++) {
    for (int j=mn2;j<=mx2;j++) {
      ll v = i^j;
      bool nfl1, nfr1, nfl2, nfr2;
      nfl1 = fl1 || i>L_bin[pos];
      nfr1 = fr1 || i<R_bin[pos];
      nfl2 = fl2 || j>L_bin[pos];
      nfr2 = fr2 || j<R_bin[pos];
      ll res = rec(pos+1, nfl1, nfr1, nfl2, nfr2);
      ans = max(ans, (v<<((int)L_bin.size() - 1 - pos)) + res);
    }
  }
  return memo[pos][fl1][fr1][fl2][fr2] = ans;
}

void f(ll x, vi &v) {
  while (x > 0) {
    v.push_back(x%2);
    x /= 2;
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  
  ll L, R; cin >> L >> R;
  f(L, L_bin); f(R, R_bin);
  while (L_bin.size() < R_bin.size()) L_bin.push_back(0);
  while (R_bin.size() < L_bin.size()) R_bin.push_back(0);
  reverse(L_bin.begin(), L_bin.end()); reverse(R_bin.begin(), R_bin.end());
  for (int i=0;i<70;i++) for (int j=0;j<2;j++) for (int k=0;k<2;k++) for (int l=0;l<2;l++) for (int m=0;m<2;m++) memo[i][j][k][l][m] = -1;
  cout << rec(0, 0, 0, 0, 0) << endl;
  return 0;
}
