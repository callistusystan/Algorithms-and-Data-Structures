#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  ll ans = 0;
  for (int i=0;i<N;i++) {
    string S; cin >> S;
    if (S[0] == 'T') ans += 4;
    if (S[0] == 'C') ans += 6;
    if (S[0] == 'O') ans += 8;
    if (S[0] == 'D') ans += 12;
    if (S[0] == 'I') ans += 20;
  }

  cout << ans << endl;

  return 0;
}
