#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, A, B, C, D;

bool check(int i) {
  return 1 <= i && i <= N;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> A >> B >> C >> D;
  ll ans = 0;
  for (int E=1;E<=N;E++) {
    int F,H,I;
    F = E+B-C;
    H = E+A-D;
    I = H+B-C;
    if (check(F) && check(H) && check(I)) ans += N;
  }
  cout << ans << endl;
  return 0;
}
