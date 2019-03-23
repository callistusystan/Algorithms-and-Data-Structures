#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int B, K; cin >> B >> K;
  int parity = 0;
  for (int i=0;i<K;i++) {
    int x; cin >> x;
    parity += (i == K-1) ? x%2 : (B%2 & x%2);
    parity %= 2;
  }
  if (parity) cout << "odd\n";
  else cout << "even\n";
  return 0;
}
