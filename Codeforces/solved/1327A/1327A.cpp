#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    ll N, K; cin >> N >> K;
    if (N >= K*K && N%2 == K%2) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
