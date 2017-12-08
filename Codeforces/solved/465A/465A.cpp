#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  string T = S;

  int ans = 0;
  for (int i=0;i<N;i++) {
    ans++;
    if (T[i] == '1') {
      T[i] = '0';
    } else {
      T[i] = '1';
      break;
    }
  }

  cout << ans << endl;

  return 0;
}
