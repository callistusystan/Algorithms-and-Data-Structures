#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, S; cin >> N >> S;
  int sum = 0, mx = 1;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    sum += ai;
    mx = max(mx, ai);
  }
  if (sum - mx <= S) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
