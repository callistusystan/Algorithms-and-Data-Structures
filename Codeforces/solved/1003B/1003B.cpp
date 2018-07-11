#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi cnt(2); int X; cin >> cnt[0] >> cnt[1] >> X;
  int cur = max_element(cnt.begin(), cnt.end()) - cnt.begin();
  for (int i=0;i<X-1;i++) {
    cout << cur;
    cnt[cur]--;
    cur = 1-cur;
  }
  for (int i=0;i<cnt[cur];i++) cout << cur;
  cur = 1-cur;
  for (int i=0;i<cnt[cur];i++) cout << cur;
  cout << endl;
  return 0;
}
