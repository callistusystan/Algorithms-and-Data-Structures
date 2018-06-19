#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, X; cin >> N >> X;
  while (N--) {
    int l,r; cin >> l >> r;
    if (l == X || l == 7-X || r == X || r == 7-X) {
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
  return 0;
}
