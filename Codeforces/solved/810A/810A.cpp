#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, K; cin >> N >> K;
  ll S = 0;
  for (int i=0;i<N;++i) {
    ll ai; cin >> ai;
    S += ai;
  }

  cout << max(0LL, (2*K-1)*N - 2*S) << endl;
  return 0;
}
