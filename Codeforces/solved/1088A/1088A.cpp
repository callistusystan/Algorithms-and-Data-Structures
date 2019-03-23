#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int X; cin >> X;
  for (int i=1;i<=X;i++) {
    for (int j=1;j<=i;j++) {
      if (j%i == 0 && i*j > X && i/j < X) {
        cout << i << " " << j << endl;
        return 0;
      }
    }
  }
  cout << "-1\n";
  return 0;
}
