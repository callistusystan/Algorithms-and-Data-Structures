#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<string> marks(N);
  vector<char> best(M, '0');
  for (int i=0;i<N;i++) {
    cin >> marks[i];
    for (int j=0;j<M;j++) {
      best[j] = max(best[j], marks[i][j]);
    }
  }

  int ans = 0;
  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      if (marks[i][j] == best[j]) {
        ans++;
        break;
      }
    }
  }
  cout << ans << endl;

  return 0;
}
