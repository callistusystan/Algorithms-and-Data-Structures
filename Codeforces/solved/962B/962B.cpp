#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int cnt[2];
  int N; cin >> N >> cnt[0] >> cnt[1];
  string S; cin >> S;
  
  int i = 0, ans = 0;
  while (i < N) {
    if (cnt[0] > cnt[1]) swap(cnt[0], cnt[1]);
    int spaces = 0;
    while (i < N && S[i] == '.') spaces++, i++;
    if (spaces > 0) {
      int a, b;
      if (spaces%2) {
        a = min(spaces/2, cnt[0]);
        b = min((spaces+1)/2, cnt[1]);
      } else {
        a = min(spaces/2, cnt[0]);
        b = min(spaces/2, cnt[1]);
      }
      ans += a + b;
      cnt[0] -= a;
      cnt[1] -= b;
    }
    i++;
  }
  cout << ans << endl;
  return 0;
}
