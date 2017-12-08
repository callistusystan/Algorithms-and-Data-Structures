#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi D(N);
  for (int i=0;i<N-1;i++) cin >> D[i];
  int A,B; cin >> A >> B;
  A--; B--;

  int ans = 0;
  for (int i=A;i<B;i++) {
    ans += D[i];
  }
  cout << ans << endl;

  return 0;
}
