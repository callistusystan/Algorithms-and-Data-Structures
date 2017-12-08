#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M,K; cin >> N >> M >> K;
  vector<bool> isHole(1e6+5);
  for (int i=0;i<M;i++) {
    int ai; cin >> ai;
    isHole[ai] = true;
  }
  int cur = 1;
  for (int i=0;i<K;i++) {
    if (isHole[cur]) break;
    int u,v; cin >> u >> v;
    if (cur == u) cur = v;
    else if (cur == v) cur = u;
  }
  cout << cur << endl;
  return 0;
}
