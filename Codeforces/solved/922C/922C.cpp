#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, K; cin >> N >> K;
  set<int> seen;
  for (ll i=1;i<=K;i++) {
    if (seen.count(N%i)) break;
    seen.insert(N%i);
  }
  if ((int)seen.size() == K) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}
