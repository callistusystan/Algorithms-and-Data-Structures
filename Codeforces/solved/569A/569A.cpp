#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T, S, Q; cin >> T >> S >> Q;
  int play = 0, downloaded = S*Q, ans = 1;
  while (downloaded < T*Q) {
    downloaded += Q-1;
    play += Q;
    if (downloaded < T*Q && play >= downloaded) {
      ans++;
      play %= Q;
    }
  }
  cout << ans << endl;
  return 0;
}
