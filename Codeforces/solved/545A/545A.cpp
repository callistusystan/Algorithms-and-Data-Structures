#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi ans;
  for (int i=0;i<N;i++) {
    bool good = true;
    for (int j=0;j<N;j++) {
      int aij; cin >> aij;
      if (aij == 1 || aij == 3) good = false;
    }

    if (good) ans.push_back(i+1);
  }

  cout << ans.size() << endl;
  if (ans.size()) {
    for (int i=0;i<(int)ans.size();i++) {
      cout << ans[i] << " ";
    }
    cout << endl;

  }
  return 0;
}
