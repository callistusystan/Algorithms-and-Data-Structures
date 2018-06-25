#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N,M,sx,sy,fx,fy;
int dr[4] = {-1,0,1,0}, dc[4] = {0,1,0,-1};
vector<string> A(505);

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> M;
  for (int i=0;i<N;i++) cin >> A[i];
  cin >> sx >> sy >> fx >> fy;
  sx--;sy--;fx--;fy--;
  queue<pii> q;
  q.push({ sx, sy });
  while (!q.empty()) {
    pii p = q.front(); q.pop();
    int x = p.first, y = p.second;
    for (int k=0;k<4;k++) {
      int nx = x + dr[k], ny = y + dc[k];
      if (0 <= nx && nx < N && 0 <= ny && ny < M) {
        if (nx == fx && ny == fy && A[fx][fy] == 'X') {
          cout << "YES\n";
          return 0;
        } 
        if (A[nx][ny] == '.') {
          A[nx][ny] = 'X';
          q.push({ nx, ny });
        }
      }
    }
  }
  cout << "NO\n";
  return 0;
}
