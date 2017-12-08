#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi dist(1e5,-1); queue<int> q;

  int N,M; cin >> N >> M;
  dist[N] = 0;
  q.push(N);

  while (!q.empty()) {
    int cur = q.front(); q.pop();
    if (cur == M) break;
    if (cur*2 < 1e5 && dist[cur*2] == -1) {
      dist[cur*2] = dist[cur]+1;
      q.push(cur*2);
    }
    if (cur-1 >= 0 && dist[cur-1] == -1) {
      dist[cur-1] = dist[cur] + 1;
      q.push(cur-1);
    }
  }

  cout << dist[M] << endl;

  return 0;
}
