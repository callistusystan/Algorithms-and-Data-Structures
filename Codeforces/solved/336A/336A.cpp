#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  int X, Y; cin >> X >> Y;
  int sum = abs(X) + abs(Y);
  if (X > 0) printf("%d %d %d %d\n", 0, Y > 0 ? sum : -sum, sum, 0);
  else printf("%d %d %d %d\n", -sum, 0, 0, Y > 0 ? sum : -sum);
  return 0;
}
