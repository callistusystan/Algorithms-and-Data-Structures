#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(6), B(6);
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    A[ai]++;
  }

  for (int i=0;i<N;i++) {
    int bi; cin >> bi;
    B[bi]++;
  }

  bool can = true;

  int ans = 0;
  for (int i=1;i<=5;i++) {
    if ((A[i]+B[i])%2) can = false;
    ans += abs(((A[i]+B[i])/2)-A[i]);
  }
  ans /= 2;

  if (can) cout << ans;
  else cout << -1;
  cout << endl;

  return 0;
}
