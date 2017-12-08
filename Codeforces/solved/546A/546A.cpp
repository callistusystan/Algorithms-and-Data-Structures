#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll K,N,W; cin >> K >> N >> W;

  ll cost = 0, price = K;
  for (int i=0;i<W;i++) {
    cost += price;
    price += K;
  }

  cout << max(0LL,cost - N) << endl;

  return 0;
}
