#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  ll S = 0; vector<ll> A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i];
    S += A[i];
  }

  sort(A.begin(), A.end());

  if (S%2) {
    bool can = false; ll x;
    for (int i=0;i<N;i++) {
      if (A[i]%2) {
        can = true; x =A[i];
        break;
      }
    }
    if (can) cout << S - x << endl;
    else cout << 0 << endl;
  } else {
    cout << S << endl;
  }

  return 0;
}
