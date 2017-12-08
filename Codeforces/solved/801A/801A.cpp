#include <bits/stdc++.h>
using namespace std;

#define SZ(x) (int)x.size()

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N;
string S;

int check() {
  int ans = 0;
  for (int i=0;i<N;i++) {
    if (S.substr(i,2) == "VK") ans++;
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> S;
  N = S.size();
  int ans = check();
  for (int i=0;i<N;i++) {
    S[i] = 'V'+'K'-S[i];
    ans = max(ans, check());
    S[i] = 'V'+'K'-S[i];
  }
  cout << ans << endl;
  return 0;
}
