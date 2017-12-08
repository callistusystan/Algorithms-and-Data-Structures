#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();

  string ans = "";
  int i = 0;
  bool wub = true;
  while (i<N) {
    if (i+3-1 < N && S.substr(i,3) == "WUB") {
      if (!wub) ans += " ";
      wub = true;
      i += 3;
    } else {
      wub = false;
      ans += S[i];
      i++;
    }
  }

  while (S.back() == ' ') S.pop_back();

  cout << ans << endl;

  return 0;
}
