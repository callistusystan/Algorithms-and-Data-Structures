#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int S = 0; map<int, int> M;
  for (int i=0;i<5;i++) {
    int ai; cin >> ai;
    M[ai]++;
    S += ai;
  }

  int best = 0;
  for (auto it = M.begin();it != M.end();it++) {
    auto cur = *it;
    if (cur.second >= 2) {
      best = max(best, cur.first*min(3, cur.second));
    }
  }

  cout << S - best << endl;

  return 0;
}
