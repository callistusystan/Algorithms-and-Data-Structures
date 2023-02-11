#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll NC2(int num) {
  return (ll)num*(num-1)/2;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    vi A(N);
    map<int, int> val_minus_index;
    for (int i=0;i<N;i++) {
      cin >> A[i];
      val_minus_index[A[i]-i]++;
    }

    ll ans = 0;
    for (auto p : val_minus_index) {
      ll count = p.second;
      ans += NC2(count);
    }
    cout << ans << endl;
  }
  return 0;
}
