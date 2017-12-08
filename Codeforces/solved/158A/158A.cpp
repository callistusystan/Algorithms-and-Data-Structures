#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K; K--;
  vi scores(N);
  for (int i=0;i<N;i++) cin >> scores[i];

  int ans = 0;
  for (int score : scores) {
    if (score > 0 && score >= scores[K]) {
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}
