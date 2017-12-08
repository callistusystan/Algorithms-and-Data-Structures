#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int N; cin >> N;

  vi A(N);
  int cnt = 0, last, first;
  last = first = -1;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    if (A[i]) {
      cnt++;
      if (first == -1) first = i;
      last = i;
    }
  }

  if (cnt == 0) cout << 0;
  else if (cnt == 1) cout << 1;
  else {
    vi sizes;
    for (int i=first;i<last;i++) {
      if (A[i]) sizes.push_back(1);
      else sizes[(int)sizes.size()-1]++;
    }
    ll ans = 1;
    for (ll s : sizes) {
      ans *= (ll) s;
    }
    cout << ans;
  }
  cout << endl;


  return 0;
}
