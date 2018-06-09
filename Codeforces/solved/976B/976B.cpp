#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N,M,K; cin >> N >> M >> K;
  if (K < N) cout << K+1 << " 1" << endl;
  else {
    K -= N;
    ll rows = K/(M-1), col;
    if (rows%2) col = M-K%(M-1);
    else col = K%(M-1)+2;
    cout << N-rows << " " << col << endl;
  }
  return 0;
}
