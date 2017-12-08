#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int days[] = {31,29,31,30,31,30,31,31,30,31,30,31};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int X; string S;
  cin >> X >> S >> S;
  int ans = 0;
  if (S == "week") {
    int cur = 5;
    for (int i=0;i<366;i++) {
      if (cur == X) ans++;
      cur++;
      if (cur > 7) cur = 1;
    }
  } else {
    for (int i=0;i<12;i++) {
      if (X <= days[i]) ans++;
    }
  }
  cout << ans << endl;

  return 0;
}
