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
  vi ans, seen(1005);
  for (int i=N-1;i>=0;i--) {
    if (seen[A[i]]) continue;
    seen[A[i]] = 1;
    ans.push_back(A[i]);
  }
  reverse(ans.begin(), ans.end());
  cout << ans.size() << endl;
  for (int num : ans) cout << num << " ";
  cout << endl;
  return 0;
}
