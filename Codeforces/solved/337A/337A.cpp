#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M;
  cin >> N >> M;
  vi F(M);
  for (int i=0;i<M;i++) cin >> F[i];

  sort(F.begin(), F.end());

  int ans = 10000;
  for (int i=0;i<M;i++) {
    int j = i+N-1;
    if (j >=M) break;

    ans = min(ans, F[j]-F[i]);
  }

  cout << ans << endl;

  return 0;
}
