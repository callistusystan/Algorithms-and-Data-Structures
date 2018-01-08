#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string A; cin >> A;
  int N = A.size();
  int cnt = 0;
  for (int i=N-1;i>=0;i--) {
    if (A[i] != '0') break;
    cnt++;
  }
  bool can = true;
  for (int i=0;i<N-cnt;i++) {
    if (A[i] != A[N-cnt-1-i]) can = false;
  }
  if (can) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
