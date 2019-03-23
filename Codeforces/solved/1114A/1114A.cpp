#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool canFeed() {
  int X, Y, Z; cin >> X >> Y >> Z;
  int A, B, C; cin >> A >> B >> C;
  if (A < X) return 0;
  A -= X;
  if (A+B < Y) return 0;
  return Z <= A+B+C-Y;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  if (canFeed()) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
