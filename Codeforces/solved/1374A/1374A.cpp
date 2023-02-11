#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int X, Y, N; cin >> X >> Y >> N;
    // K % X == Y
    // K = X*f + Y <= N
    int f = (N - Y + X - 1)/X;
    int K = X*f + Y;
    while (K > N) K -= X;
    cout << K << endl;
  }
  return 0;
}
