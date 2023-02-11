#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool is_bad(int x) {
  return x%3 == 0 || x%10 == 3;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi ans(1000);
  int x = 1;
  for (int i=0;i<1000;i++) {
    while (is_bad(x)) x++;
    ans[i] = x++;
  }
  int T; cin >> T;
  while (T--) {
    int K; cin >> K;
    cout << ans[K-1] << endl;
  }
  return 0;
}
