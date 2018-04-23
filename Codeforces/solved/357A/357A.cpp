#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool inRange(int x, int l, int r) {
  return l <= x && x <= r;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int M; cin >> M;
  vi ps(M+1);
  for (int i=1;i<=M;i++) {
    cin >> ps[i];
    ps[i] += ps[i-1];
  }
  int X,Y; cin >> X >> Y;
  for (int i=2;i<=M;i++) {
    if (inRange(ps[i-1], X, Y) && inRange(ps[M]-ps[i-1], X, Y)) {
      cout << i << endl;
      return 0;
    }
  }
  cout << "0\n";
  return 0;
}
