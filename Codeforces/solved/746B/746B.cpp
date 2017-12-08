#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;

  string ans;
  ans += S[0];

  bool left = true;
  if (N%2 == 0) left = false;

  for (int i=1;i<N;i++) {
    if (left) ans = S[i] + ans;
    else ans = ans + S[i];
    left = !left;
  }

  cout << ans << endl;

  return 0;
}
