#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, X, Y; cin >> N >> X >> Y;
  cout << max(0LL, (N*Y+99)/100 - X) << endl;
  return 0;
}
