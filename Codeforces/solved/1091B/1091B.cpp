#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  ll X=0, Y=0;
  for (int i=0;i<2*N;i++) {
    int x, y; cin >> x >> y;
    X += x;
    Y += y;
  }
  cout << X/N<< " " << Y/N << endl;
  return 0;
}
