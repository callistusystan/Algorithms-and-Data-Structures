#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S,T; cin >> S >> T;
  int N = S.size();
  string ans; int cnt = 0;
  for (int i=0;i<N;i++) {
    if (S[i] != T[i]) {
      if (cnt%2) ans += T[i];
      else ans += S[i];
      cnt++;
    } else {
      ans += S[i];
    }
  }
  if (cnt%2) cout << "impossible";
  else cout << ans;
  cout << endl;

  return 0;
}
