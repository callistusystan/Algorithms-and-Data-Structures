#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  if (N >= 0) cout << N << endl;
  else {
    int N1, N2;
    N1 = N2 = N;
    N1/=10;
    N2 /= 100;
    N2 *= 10;
    N2 += N%10;

    int ans = max(N, N1);
    ans = max(N1, N2);
    cout << ans << endl;
  }

  return 0;
}
