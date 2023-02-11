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
    set<int> nums;
    for (int i=0;i<N;i++) {
      int x; cin >> x;
      nums.insert(x);
    }
    cout << nums.size() << endl;
  }
  return 0;
}
