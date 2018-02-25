#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  int X,Y,prev,ans;
  X = Y = ans = 0;
  if (S[0] == 'U') Y++;
  else X++;
  prev = signbit(Y-X);
  for (int i=1;i<N;i++) {
    if (S[i] == 'U') Y++;
    else X++;
    if (X != Y && signbit(Y-X) != prev) {
      ans++;
      prev = signbit(Y-X);
    }
  }
  cout << ans << endl;
  return 0;
}
