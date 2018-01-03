#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int n1,n2;
  n1 = n2 = 0;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    if (ai == 1) n1++;
    else n2++;
  }
  int ans = 0;
  ans += min(n1, n2);
  n1 -= min(n1, n2);
  ans += n1/3;
  cout << ans << endl;
  return 0;
}
