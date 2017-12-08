#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  char cur = 'a';
  int ans = 0;
  for (int i=0;i<N;i++) {
    int d = abs(S[i] - cur);
    ans += min(d, 26-d);
    cur = S[i];
  }

  cout << ans << endl;

  return 0;
}
