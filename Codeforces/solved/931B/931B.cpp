#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,A,B; cin >> N >> A >> B;
  int depth = __builtin_ffs(N) - 1;
  A += (1<<depth) - 1; B += (1<<depth) - 1;
  int cur = 1;
  while (cur < depth && A != B) {
    A /= 2; B /= 2;
    if (A == B) {
      cout << cur << endl;
      return 0;
    }
    cur++;
  }
  if (cur == depth) cout << "Final!\n";
  else cout << cur << endl;
  return 0;
}
