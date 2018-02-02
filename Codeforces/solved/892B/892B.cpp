#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  int cur = N+1;
  int ans = N;
  for (int i=N-1;i>=0;i--) {
    if (i >= cur) {
      ans--;
    }
    cur = min(cur, i-A[i]);
  }
  cout << ans << endl;
  return 0;
}
