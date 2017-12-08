#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, S; cin >> N >> S;
  int ans = S;
  for (int i=0;i<N;i++) {
    int fi, ti; cin >> fi >> ti;
    ans = max(ans, fi + ti);
  }
  cout << ans << endl;

  return 0;
}
