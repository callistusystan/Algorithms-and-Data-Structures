#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int m(int a, int b) {
  return ((a%b)+b)%b;
}

bool f(int a) {
  return ((a%10 == 7) || ((a/10)%10 == 7));
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int X,H,M; cin >> X >> H >> M;
  int i=0;
  while (1) {
    if (f(H) || f(M)) {
      cout << i << '\n';
      return 0;
    }
    M -= X;
    if (M < 0) H--;
    M = m(M, 60);
    H = m(H, 24);
    i++;
  }

  return 0;
}
