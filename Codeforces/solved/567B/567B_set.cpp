#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  set<int> S;
  vector<pair<char, int>> A;
  set<int> cur;
  for (int i=0;i<N;i++) {
    char c; int ai; cin >> c >> ai;
    A.push_back({c, ai});
    if (c == '+') S.insert(ai);
    else {
      if (S.count(ai) == 0) {
        cur.insert(ai);
      }
      S.erase(ai);
    }
  }

  int ans = cur.size();
  for (int i=0;i<N;i++) {
    char c; int ai;
    c = A[i].first; ai = A[i].second;
    if (c == '+') {
      cur.insert(ai);
      ans = max(ans, (int)cur.size());
    } else {
      cur.erase(ai);
    }
  }
  cout << ans << endl;
  return 0;
}
