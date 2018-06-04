#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  int l=0,r=N-1, ans = 0;
  while (l < N && S[l]=='.') l++;
  if (l == N) {
    cout << N << endl;
    return 0;
  }
  if (S[l] == 'R') ans += l;
  while (r >= 0 && S[r]=='.') r--;
  if (S[r] == 'L') ans += N-(r+1);
  while (l < r) {
    if (S[l] == 'L') {
      l++;
      while (l < r && S[l] != 'R') {
        l++;
        ans++;
      }
    } else {
      int t = l;
      while (l < r && S[l] != 'L') l++;
      ans += ((l-1)-(t+1)+1)%2;
    }
  }
  cout << ans << endl;
  return 0;
}
