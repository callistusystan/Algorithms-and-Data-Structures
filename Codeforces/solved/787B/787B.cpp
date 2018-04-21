#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M ;
  while (M--) {
    int k; cin >> k;
    bool safe = false;
    set<int> seen;
    while (k--) {
      int num; cin >> num;
      if (seen.count(-num)) safe = true;
      seen.insert(num);
    }
    if (!safe) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}
