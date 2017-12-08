#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M;
  cin >> N;
  vi B(N);
  for (int i=0;i<N;i++) cin >> B[i];

  cin >> M;
  vi G(M);
  for (int i=0;i<M;i++) cin >> G[i];

  sort(B.begin(), B.end());
  sort(G.begin(), G.end());

  int i, j, ans;
  i = j = ans = 0;
  while (i < N && j < M) {
    if (abs(B[i] - G[j]) <= 1) {
      i++; j++; ans++;
    } else if (B[i] > G[j]) {
      j++;
    } else {
      i++;
    }
  }

  cout << ans << endl;

  return 0;
}
