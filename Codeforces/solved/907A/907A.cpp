#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi A(4);
  for (int i=0;i<4;i++) cin >> A[i];
  int mn, mx;
  mn = A[2];
  mx = min(2*A[2], A[1]-1);
  mn = max(mn, A[3]);
  mx = min(mx, 2*A[3]);
  if (mn <= mx) {
    cout << A[0]*2 << endl;
    cout << A[1]*2 << endl;
    cout << mn << endl;
  }else cout << "-1\n";
  return 0;
}
