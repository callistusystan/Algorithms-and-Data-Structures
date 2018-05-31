#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll N; 

ll rec(int n4, int n7, ll num) {
  if (n4 == 0 && n7 == 0 && num >= N) return num;
  ll res;
  if (n4) {
    res = rec(n4-1, n7, num*10+4);
    if (res != -1) return res;
  }
  if (n7) {
    res = rec(n4, n7-1, num*10+7);
    if (res != -1) return res;
  }
  return -1;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N;
  for (int i=1;i<=5;i++) {
    ll res = rec(i, i, 0);
    if (res != -1) {
      cout << res << endl;
      return 0;
    }
  }
  return 0;
}
