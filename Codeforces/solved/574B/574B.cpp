#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<set<int>> know(N);
  vector<pii> edges(M);
  for (int i=0;i<M;i++) {
    cin >> edges[i].first >> edges[i].second;
    edges[i].first--; edges[i].second--;
    know[edges[i].first].insert(edges[i].second);
    know[edges[i].second].insert(edges[i].first);
  }
  int ans = 1e9;
  for (int i=0;i<M;i++) {
    int x = edges[i].first, y = edges[i].second;
    for (int z : know[x]) {
      if (know[y].count(z)) {
        ans = min(ans, (int)know[x].size() + (int)know[y].size() + (int)know[z].size() - 6);
      }
    }
  }
  if (ans == 1e9) cout << "-1\n";
  else cout << ans << endl;
  return 0;
}
