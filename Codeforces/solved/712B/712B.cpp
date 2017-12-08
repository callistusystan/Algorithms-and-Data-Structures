#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N, x, y;
  N = S.size();
  x = y = 0;

  if (N%2) cout << -1;
  else {
    for (int i=0;i<N;i++) {
      if (S[i] == 'L') x--;
      else if (S[i] == 'R') x++;
      else if (S[i] == 'U') y--;
      else if (S[i] == 'D') y++;
    }

    cout << (abs(x) + abs(y))/2;
  }
  cout << endl;

  return 0;
}
