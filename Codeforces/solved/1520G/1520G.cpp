#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, M, W;

vi di = {-1,0,1,0};
vi dj = {0,1,0,-1};

ll bfs(vector<vi>& A) {
  vector<vector<ll>> dist(N, vector<ll>(M, -1));
  queue<pii> q;
  dist[0][0] = 0;
  q.push({0,0});
  while (!q.empty()) {
    auto cur = q.front(); q.pop();
    int x = cur.first, y = cur.second;
    ll d = dist[x][y];
    for (int k=0;k<4;k++) {
      int xx = x + di[k];
      int yy = y + dj[k];
      if (xx < 0 || xx >= N || yy < 0 || yy >= M || A[xx][yy] == -1) continue;
      if (dist[xx][yy] == -1 || d + W < dist[xx][yy]) {
        dist[xx][yy] = d + W;
        q.push({xx, yy});
      }
    }
  }
  return dist[N-1][M-1];
}

ll bfs_to_portal(int startx, int starty, vector<vi>& A) {
  vector<vector<ll>> dist(N, vector<ll>(M, -1));
  queue<pii> q;
  dist[startx][starty] = 0;
  q.push({startx,starty});
  ll ans = -1;
  while (!q.empty()) {
    auto cur = q.front(); q.pop();
    int x = cur.first, y = cur.second;
    ll d = dist[x][y];
    if (A[x][y] > 0) {
      if (ans == -1) {
        ans = d + A[x][y];
      }
      ans = min(ans, d + A[x][y]);
    }
    for (int k=0;k<4;k++) {
      int xx = x + di[k];
      int yy = y + dj[k];
      if (xx < 0 || xx >= N || yy < 0 || yy >= M || A[xx][yy] == -1) continue;
      if (dist[xx][yy] == -1 || d + W < dist[xx][yy]) {
        dist[xx][yy] = d + W;
        q.push({xx, yy});
      }
    }
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> M >> W;
  vector<vi> A(N, vi(M));
  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      cin >> A[i][j];
    }
  }

  ll dist_walk = bfs(A);

  ll dist_start_to_portal = bfs_to_portal(0, 0, A);
  ll dist_end_to_portal = bfs_to_portal(N-1, M-1, A);
  ll dist_with_portal = -1;
  if (dist_start_to_portal != -1 && dist_end_to_portal != -1) {
    dist_with_portal = dist_start_to_portal + dist_end_to_portal;
  }
  if (dist_walk == -1 && dist_with_portal == -1) {
    cout << "-1\n";
  } else if (dist_walk == -1) {
    cout << dist_with_portal << '\n';
  } else if (dist_with_portal ==  -1) {
    cout << dist_walk << '\n';
  } else {
    cout << min(dist_walk, dist_with_portal) << '\n';
  }
  return 0;
}
