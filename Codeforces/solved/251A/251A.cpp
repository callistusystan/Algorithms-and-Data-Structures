#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,D; cin >> N >> D;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  ll ans = 0;
  for (int i=0;i<N-2;i++) {
    int j = upper_bound(A.begin()+i+1, A.end(), A[i]+D) - A.begin() - 1;
    if (j-i >= 2) {
      ll cnt = j-i;
      ans += (cnt*(cnt-1))/2;
    }
  }
  cout << ans << endl;
  return 0;
}
