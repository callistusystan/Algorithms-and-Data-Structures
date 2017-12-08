#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, X; cin >> N >> X;
  vector<bool> A(101, false);
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    A[ai] = true;
  }

  int ans = 0;
  for (int i=0;i<X;i++) {
    if (!A[i]) ans++;
  }
  if (A[X]) ans++;
  cout << ans << endl;
  return 0;
}
