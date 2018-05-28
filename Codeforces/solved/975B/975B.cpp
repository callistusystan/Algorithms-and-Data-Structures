#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<ll> A(14);
  for (int i=0;i<14;i++) cin >> A[i];
  ll ans = 0;
  for (int i=0;i<14;i++) {
    vector<ll> B = A;
    ll have = B[i];
    B[i] = 0;
    for (int j=0;j<14;j++) {
      int curPos = (i+1+j)%14;
      B[curPos] += have/14;
      if (j < have%14) B[curPos]++;
    }
    ll res = 0;
    for (int i=0;i<14;i++) res += B[i]%2 ? 0 : B[i];
    ans = max(ans, res);
  }  
  cout << ans << endl;
  return 0;
}
