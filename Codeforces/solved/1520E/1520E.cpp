#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    string S; cin >> S;
    vi sheep_pos;
    for (int i=0;i<N;i++) {
      if (S[i] == '*') {
        sheep_pos.push_back(i);
      }
    }
    ll ans = 0;
    int nsheep = sheep_pos.size();
    for (int i=0;i<sheep_pos.size()/2;i++) {
      int first = sheep_pos[i], last = sheep_pos[sheep_pos.size()-1-i];
      nsheep -= 2;
      ans += last - first - 1 - nsheep;
    }

    cout << ans << endl;
  }
  return 0;
}
