#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,A; cin >> N >> A;
  A--;
  vi T(N);
  for (int i=0;i<N;i++) cin >> T[i];

  int ans = 0;
  if (T[A] == 1) ans++;
  for (int i=1;i<N;i++) {
    if (A-i >= 0 && A+i < N) {
      if (T[A-i] == 1 && T[A+i] == 1) ans+=2;
    } else if (A-i >= 0) {
      if (T[A-i] == 1) ans++;
    } else if (A+i < N) {
      if (T[A+i] == 1) ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
