#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    int mult = 1;
    vi ans;
    while (N) {
      if (N%10) {
        ans.push_back((N%10)*mult);
      }
      N /= 10;
      mult *= 10;
    }
    cout << ans.size() << endl;
    for (int i=0;i<ans.size();i++) {
      cout << ans[i] << " \n"[i==ans.size()-1];
    }
  }
  return 0;
}
