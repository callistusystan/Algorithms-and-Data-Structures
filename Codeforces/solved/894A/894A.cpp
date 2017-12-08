#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  vi SUM(N);
  for (int i=0;i<N;i++) {
    if (S[i] == 'Q') SUM[i] = 1;
    if (i) SUM[i] += SUM[i-1];
  }
  ll ans = 0;
  for (int i=0;i<N;i++) {
    if (i && S[i] == 'A')
      ans += SUM[i-1]*(SUM[N-1]-SUM[i-1]);
  }
  cout << ans << endl;
  return 0;
}
