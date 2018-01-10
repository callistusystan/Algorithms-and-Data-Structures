#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi D = {1,2,3,4,6,12};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    string S; cin >> S;
    vi ans;
    for (int a: D) {
      int b = 12/a;
      for (int j=0;j<b;j++) {
        bool can = true;
        for (int i=0;i<a;i++) {
          if (S[i*b+j] == 'O') can = false;
        }
        if (can) {
          ans.push_back(a);
          break;
        }
      }
    }
    cout << ans.size();
    for (int num : ans) cout << " " << num << "x" << 12/num;
    cout << endl;
  }
  return 0;
}
