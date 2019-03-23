#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int W, H, K; cin >> W >> H >> K;
  cout << 2*K*W - 16*(K-1)*(K)/2 + 2*K*H - 4*K << endl;
  return 0;
}
