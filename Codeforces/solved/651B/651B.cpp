#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi cnt(1005);
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    cnt[ai]++;
  }

  vi B;
  for (int i=1;i<1005;i++) {
    for (int j=0;j<cnt[i];j++) {
      if (j >= (int)B.size()) {
        B.push_back(1);
      } else {
        B[j]++;
      }
    }
  }

  int ans = 0;
  for (int i=0;i<(int)B.size();i++) {
    ans += B[i]-1;
  }
  cout << ans << endl;

  return 0;
}
