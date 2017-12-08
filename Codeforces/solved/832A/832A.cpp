#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, K; cin >> N >> K;

  ll r = N%(2*K);
  if (r >= K) cout <<"YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
