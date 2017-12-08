#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,A,B; cin >> N >> A >> B;

  cout << N-1 - max(A,N-B-1)+1 << endl;

  // int ans = 0;
  // for (int i=0;i<N;i++) {
  //   if (i>=A && N-i-1 <=B) ans++;
  // }
  //
  // cout << ans << endl;

  return 0;
}
