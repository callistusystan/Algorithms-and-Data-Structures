#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int f(int &x, int d) {
  int res = 0;
  while (x%d == 0) {
    x /= d;
    res++;
  }
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  
  int A, B; cin >> A >> B;
  int ans = 0;
  ans += abs(f(A, 2) - f(B, 2));
  ans += abs(f(A, 3) - f(B, 3));
  ans += abs(f(A, 5) - f(B, 5));
  if (A == B) cout << ans << endl;
  else cout << "-1\n";
  return 0;
}