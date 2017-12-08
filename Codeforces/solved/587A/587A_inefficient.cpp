#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi A(1e7);
  int N; cin >> N;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    while (A[ai] == 1) {
      A[ai] = 0;
      ai++;
    }
    A[ai] = 1;
  }
  int ans = 0;
  for (int i=0;i<1e7;i++) {
    ans += A[i];
  }
  cout << ans << endl;
  return 0;
}
