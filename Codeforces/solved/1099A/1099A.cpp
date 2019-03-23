#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int W, H; cin >> W >> H;
  int U1, D1; cin >> U1 >> D1;
  int U2, D2; cin >> U2 >> D2;
  while (H > 0) {
    W += H;
    if (H == D1) W -= U1;
    else if (H == D2) W -= U2;
    W = max(0, W);
    H--;
  }
  cout << W << endl;
  return 0;
}
