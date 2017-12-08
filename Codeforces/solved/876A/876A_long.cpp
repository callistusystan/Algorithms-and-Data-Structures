#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, A, B, C; cin >> N >> A >> B >> C;
  vector<vector<pii>> adjList(3);
  adjList[0].push_back({A,1});
  adjList[0].push_back({B,2});
  adjList[1].push_back({A,0});
  adjList[1].push_back({C,2});
  adjList[2].push_back({B,0});
  adjList[2].push_back({C,1});

  int ans = 0, cur = 0;
  for (int i=0;i<N-1;i++) {
    pii best = min(adjList[cur][0], adjList[cur][1]);
    ans += best.first;
    cur = best.second;
  }
  cout << ans << endl;

  return 0;
}
