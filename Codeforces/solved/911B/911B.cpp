#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,A,B; cin >> N >> A >> B;
  int ans = 0;
  for (int i=1;i<=N-1;i++) {
    ans = max(ans, min(A/i, B/(N-i)));
  }
  cout << ans << endl;
  return 0;
}
