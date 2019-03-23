#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int W1, H1, W2, H2; cin >> W1 >> H1 >> W2 >> H2;
  //cout << H1+H2+2 + W1+W2+2 + H1+H2 + W1-W2 << endl;
  cout << 2*(W1+H1+H2)+4 << endl;
  return 0;
}
