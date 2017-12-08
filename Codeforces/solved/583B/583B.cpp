#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  int ans = 0, cnt = 0;
  while (1) {
    for (int i=0;i<N;i++) {
      if (cnt >= A[i]) {
        A[i] = 1e9;
        cnt++;
      }
    }
    if (cnt == N) break;
    ans++;

    for (int i=N-1;i>=0;i--) {
      if (cnt >= A[i]) {
        A[i] = 1e9;
        cnt++;
      }
    }
    if (cnt == N) break;
    ans++;
  }
  cout << ans << endl;

  return 0;
}
