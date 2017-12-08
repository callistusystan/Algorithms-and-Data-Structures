#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int sum(int X) {
  int res = 0;
  while (X > 0) {
    res += X%10;
    X /= 10;
  }
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi ans;
  for (int i=1;i<=9*9;i++) {
    int X = N-i;
    if (X > 0 && sum(X) == i) ans.push_back(N-i);
  }

  sort(ans.begin(), ans.end());
  cout << ans.size() << endl;
  for (int i=0;i<(int)ans.size();i++) {
    cout << ans[i] << endl;
  }

  return 0;
}
