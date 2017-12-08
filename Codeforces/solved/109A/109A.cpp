#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  for (int i=0;i<=N/4;i++) {
    int num = N-4*i;
    if (num%7 == 0 && num/7 >= 0) {
      int j = num/7;
      string ans(i, '4');
      for (int k=0;k<j;k++) ans += '7';
      cout << ans << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}
