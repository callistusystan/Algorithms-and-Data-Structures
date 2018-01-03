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
  set<int> seen;
  int ans;
  for (int i=N-1;i>=0;i--) {
    if (!seen.count(A[i])) {
      seen.insert(A[i]);
      ans = A[i];
    }
  }
  cout << ans << endl;
  return 0;
}
