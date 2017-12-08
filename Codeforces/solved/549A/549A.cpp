#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<string> A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  int ans = 0;
  for (int i=0;i+1<N;i++) {
    for (int j=0;j+1<M;j++) {
      string cur = {A[i][j], A[i][j+1], A[i+1][j], A[i+1][j+1]};
      sort(cur.begin(), cur.end());
      if (cur == "acef") ans++;
    }
  }
  cout << ans << endl;

  return 0;
}
