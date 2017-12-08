#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A,B,C,D; cin >> A >> B >> C >> D;

  ll M, V;
  M = max(3*A/10, A-A/250*C);
  V = max(3*B/10, B-B/250*D);

  if (M > V) cout << "Misha";
  else if (M == V) cout << "Tie";
  else cout << "Vasya";
  cout << endl;

  return 0;
}
