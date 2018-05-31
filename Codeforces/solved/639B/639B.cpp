#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, D, H; cin >> N >> D >> H;
  if (D > H*2) {
    cout << "-1\n";
    return 0;
  }
  for (int i=0;i<H;i++) cout << 1+i << " " << 2+i << endl;
  
  return 0;
}
