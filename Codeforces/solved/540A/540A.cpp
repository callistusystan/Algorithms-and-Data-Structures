#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S,T; cin >> S >> T;

  int ans = 0;
  for (int i=0;i<N;i++) {

    ans += min(abs(S[i]-T[i]), 10 -abs(S[i]-T[i]));
  }
  cout << ans << endl;

  return 0;
}
