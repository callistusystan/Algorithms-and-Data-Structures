#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int solve() {
  int A,B,F,K; cin >> A >> B >> F >> K;
  int fuel = B, ans = 0;
  if (B < F || B < A-F) return -1;
  if (K > 1 && B < 2*(A-F)) return -1;
  if (K > 2 && B < 2*F) return -1;
  for (int i=0;i<K;i++) {
    fuel -= i%2 ? A-F : F;
    if (i < K-1) {
      if (fuel < (i%2 ? 2*F : 2*(A-F))) {
        fuel = B;
        ans++;
      }
    } else {
      if (fuel < (i%2 ? F : A-F)) {
        fuel = B;
        ans++;
      }
    }
    fuel -= i%2 ? F : A-F;
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cout << solve() << endl;
  return 0;
}
