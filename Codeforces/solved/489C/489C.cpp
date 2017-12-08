#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

bool can(int M, int S) {
  return (0 <= S && S <= 9*M);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int M, S;
  cin >> M >> S;

  if (S == 0) {
    if (M == 1) cout << "0 0" << endl;
    else cout << "-1 -1" << endl;
    return 0;
  }
  if (S > 9*M) {
    cout << "-1 -1" << endl;
    return 0;
  }

  string ans1, ans2;
  int re1, re2;
  re1 = re2 = S;
  for (int i=0;i<M-1;i++) {
    for (int d=(i==0 ? 1:0);d<=9;d++) {
      if (can(M-i-1, re1-d)) {
        ans1 += '0'+d;
        re1-=d;
        break;
      }
    }
  }
  ans1 += '0'+re1;

  for (int i=0;i<M-1;i++) {
    for (int d=9;d>=(i==0 ? 1:0);d--) {
      if (can(M-i-1, re2-d)) {
        ans2 += '0'+d;
        re2 -= d;
        break;
      }
    }
  }
  ans2 += '0'+re2;

  cout << ans1 << " " << ans2 << endl;
  return 0;
}
