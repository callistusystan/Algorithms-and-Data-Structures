#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int A, B, C; cin >> A >> B >> C;
  for (int i=1;i<=B;i++) {
    A *= 10;
    if (A/B == C) {
      cout << i << endl;
      return 0;
    }
    A %= B;
  }
  cout << "-1\n";
  return 0;
}
