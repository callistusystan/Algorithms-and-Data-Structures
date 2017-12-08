#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int K,R; cin >> K >> R;

  for (int i=1;i<=10;i++) {
    int cost = i*K;

    if (cost%10 == 0 || (cost-R)%10 == 0) {
      cout << i << endl;
      break;
    }
  }

  return 0;
}
