#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  vector<bool> available(N*K+1, 1);
  vector<vi> ans(K);
  for (int i=0;i<K;i++) {
    int ai; cin >> ai;
    available[ai] = 0;
    ans[i].push_back(ai);
  }
  int cur = 0;
  for (int i=1;i<=N*K;i++) {
    if (!available[i]) continue;
    while (cur < K && (int)ans[cur].size() == N) cur++;
    if (cur >= K) break;
    ans[cur].push_back(i);
  }
  for (vi &v : ans) {
    for (int i : v) cout << i << " ";
    cout << endl;
  }
  return 0;
}
