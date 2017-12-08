#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M,K; cin >> N >> M >> K;
  M--;

  int ans = 1000;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    if (ai && K >= ai) {
      ans = min(ans, abs(M-i));
    }
  }

  cout << ans*10 << endl;

  return 0;
}
