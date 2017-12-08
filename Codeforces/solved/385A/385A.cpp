#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, C; cin >> N >> C;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  int ans = 0;
  for (int i=0;i<N-1;i++) {
    int profit = A[i]-A[i+1]-C;
    ans = max(ans, profit);
  }
  cout << ans << endl;

  return 0;
}
