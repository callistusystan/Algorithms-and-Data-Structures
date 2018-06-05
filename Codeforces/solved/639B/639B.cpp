#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, D, H; cin >> N >> D >> H;
  if (D == 1) {
    if (N == 2) cout << "1 2\n";
    else cout << "-1\n";
    return 0;
  } else if (D > 2*H) {
    cout << "-1\n";
    return 0;
  }
  int prev = 1, cur = H+2;
  for (int i=0;i<H;i++) {
    cout << prev << " " << 2+i << endl;
    prev = 2+i;
  }
  if (D > H) {
    prev = 1;
    for (int i=0;i<D-H;i++) {
      cout << prev << " " << H+2+i << endl;
      prev = H+2+i;
    }
    cur = H+2+D-H-1+1;
  }
  while (cur <= N) {
    cout << H << " " << cur << endl;
    cur++;
  }
  return 0;
}
