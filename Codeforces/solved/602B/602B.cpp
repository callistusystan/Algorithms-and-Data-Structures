#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

/*
 * this answer makes use of a last array, to keep track of
 * the last index where an element appears
 * initially, all values in last = -1
 */

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  vi last(1e5+5, -1);
  int l, ans;
  l = ans = 0;
  for (int i=0;i<N;i++) {
    int x = -1;
    if (A[i]-2 >= 1) x = max(x, last[A[i]-2]);
    if (A[i]+2 <= 1e5) x = max(x, last[A[i]+2]);
    l = max(l, x+1);
    ans = max(ans, i-l+1);
    last[A[i]] = i;
  }
  cout << ans << endl;
  return 0;
}
