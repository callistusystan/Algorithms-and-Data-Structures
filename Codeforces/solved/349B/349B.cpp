#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int V; cin >> V;
  vi A(10);
  for (int i=1;i<=9;i++) cin >> A[i];
  int best = 1;
  for (int i=2;i<=9;i++)
    if (A[i] <= A[best])
      best = i;
  if (V < A[best]) {
    cout << "-1\n";
    return 0;
  }
  string ans(V/A[best], '0'+best);
  V -= V/A[best]*A[best];
  for (int i=0;i<(int)ans.size();i++) {
    for (int j=9;j>=1;j--) {
      if (V >= (A[j]-A[best]) && j > best) {
        ans[i] = j + '0';
        V -= (A[j]-A[best]);
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
