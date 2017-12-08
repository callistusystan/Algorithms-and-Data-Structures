#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();

  int ans = 0;
  for (int i=0;i<N;i++) {
    ans *= 2;
    if (S[i] == '4') {
      ans += 1;
    } else {
      ans += 2;
    }
  }

  cout << ans << endl;
  return 0;
}
