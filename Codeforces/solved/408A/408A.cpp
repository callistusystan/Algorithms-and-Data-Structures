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
  int ans = 2e9;
  for (int i=0;i<N;i++) {
    int cur = 0;
    for (int j=0;j<A[i];j++) {
      int mij; cin >> mij;
      cur += mij*5 + 15;
    }
    ans = min(ans, cur);
  }
  cout << ans << endl;
  return 0;
}
