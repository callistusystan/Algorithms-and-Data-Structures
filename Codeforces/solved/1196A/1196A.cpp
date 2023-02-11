#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int Q; cin >> Q;
  while (Q--) {
    vector<ll> A(3);
    for (int i=0;i<3;i++) cin >> A[i];
    sort(A.begin(), A.end());
    cout << A[1] + (A[2] - (A[1]-A[0]))/2 << endl;
  }
  return 0;
}
