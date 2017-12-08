#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, K; cin >> N >> K;

  int i = 1;
  while ((K&1) == 0) {
    K >>= 1;
    i++;
  }

  cout << i << endl;

  return 0;
}
