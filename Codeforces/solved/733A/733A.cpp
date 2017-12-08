#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

string V = "AEIOUY";

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();

  int ans = 0, pos = -1;
  for (int i=0;i<N;i++) {
    if (V.find(S[i]) != string::npos) {
      ans = max(ans, i - pos);
      pos = i;
    }
  }
  ans = max(ans, N - pos);

  cout << ans << endl;

  return 0;
}
