#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int Y, B, R; cin >> Y >> B >> R;
  if (B < Y+1) Y = B-1;
  if (R < Y+2) Y = R-2;
  cout << Y*3+3 << endl;
  return 0;
}
