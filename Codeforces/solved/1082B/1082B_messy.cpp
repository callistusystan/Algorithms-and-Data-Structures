#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  vi left(N), right(N);
  int ans = 0, cur = 0, segments = 0;
  for (int i=0;i<N;i++) {
    if (S[i] == 'G') {
      if (cur == 0) segments++;
      cur++;
    } else cur = 0;
    left[i] = cur;
    ans = max(ans, cur);
  }
  cur = 0;
  for (int i=N-1;i>=0;i--) {
    if (S[i] == 'G') cur++;
    else cur = 0;
    right[i] = cur;
  }
  if (segments > 1) {
    if (S[0] == 'S') ans = max(ans, 1+right[1]);
    if (S[N-1] == 'S') ans = max(ans, 1+left[N-2]);
    for (int i=1;i<N-1;i++) {
      if (S[i] == 'G') continue;
      ans = max(ans, 1+left[i-1]);
      ans = max(ans, 1+right[i+1]);
      if (S[i-1] == 'G' && S[i+1] == 'G') {
        if (segments == 2) ans = max(ans, left[i-1]+right[i+1]);
        else ans = max(ans, 1+left[i-1]+right[i+1]);
      }
    }
  }
  cout << ans << endl;
  return 0;
}
