#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int K; cin >> K;
  vector<string> A(4);
  for (int i=0;i<4;i++) cin >> A[i];
  bool can = true;
  for (int k=1;k<=9;k++) {
    int cnt = 0;
    for (int i=0;i<4;i++) {
      for (int j=0;j<4;j++) {
        if (A[i][j] == '0'+k) cnt++;
      }
    }
    if (cnt > 2*K) can = false;
  }
  if (can) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
