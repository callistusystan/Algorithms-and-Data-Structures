#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N,M; cin >> N >> M;

  if (N == 1) cout << 1;
  else {
    ll left,right;
    left = M-1; right = N-M;
    if (M > 1 && left >= right) cout << M-1;
    else cout << M+1;
  }

  cout << endl;

  return 0;
}
