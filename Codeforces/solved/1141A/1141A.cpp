#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  int ans = 0;
  while ((M/N)%2 == 0) {
    ans++;
    N <<= 1;
  }
  while ((M/N)%3 == 0) {
    ans++;
    N *= 3;
  }
  if (N == M) cout << ans << endl;
  else cout << "-1\n";
  return 0;
}
