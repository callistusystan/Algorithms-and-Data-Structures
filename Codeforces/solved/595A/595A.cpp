#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<vi> flat(N, vi(2*M));
  for (int i=0;i<N;i++) {
    for (int j=0;j<2*M;j++) {
      cin >> flat[i][j];
    }
  }

  int ans = 0;
  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      if (flat[i][2*j] || flat[i][2*j+1]) {
        ans ++;
      }
    }
  }
  cout << ans << endl;

  return 0;
}
