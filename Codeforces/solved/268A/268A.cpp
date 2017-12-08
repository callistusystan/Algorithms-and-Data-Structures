#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi H(N), G(N);
  for (int i=0;i<N;i++) {
    cin >> H[i] >> G[i];
  }

  int ans = 0;
  for (int i=0;i<N;i++) {
    for (int j=0;j<N;j++) {
      if (i == j) continue;

      if (H[i] == G[j]) ans++;
    }
  }

  cout << ans << endl;

  return 0;
}
