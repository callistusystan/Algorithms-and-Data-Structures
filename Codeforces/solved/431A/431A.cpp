#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi A(5);
  for (int i=1;i<=4;i++) cin >> A[i];

  string S; cin >> S;
  int N = S.size();
  ll ans = 0;
  for (int i=0;i<N;i++) {
    ans += A[S[i]-'0'];
  }

  cout << ans << endl;

  return 0;
}
