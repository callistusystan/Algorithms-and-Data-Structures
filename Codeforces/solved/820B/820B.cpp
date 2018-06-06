#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, A; cin >> N >> A;
  double a = 180.0/N;
  int ans = 3; double best = a, cur = 0;
  for (int i=0;i<N-2;i++) {
    cur += a;
    if (fabs(A-cur) < fabs(A-best)) {
      ans = 3+i;
      best = cur;
    }
  }
  cout << "2 1 " << ans << endl;
  return 0;
}
