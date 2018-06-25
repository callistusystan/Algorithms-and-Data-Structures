#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  
  int A, B; cin >> A >> B;
  map<pii, int> dist;
  queue<pii> q;
  q.push({ A, B });
  dist[{ A, B }] = 0;
  while (!q.empty()) {
    pii p = q.front(); q.pop();
    int x = p.first, y = p.second, d = dist[p];
    if (x == y) {
      cout << d << endl;
      return 0;
    }
    if (x%2 == 0 && !dist.count({ x/2, y })) { 
      q.push({ x/2, y });
      dist[{ x/2, y }] = d+1;
    }
    if (y%2 == 0 && !dist.count({ x, y/2 })) {
      q.push({ x, y/2 });
      dist[{ x, y/2 }] = d+1;
    }
    if (x%3 == 0 && !dist.count({ x/3, y })) {
      q.push({ x/3, y });
      dist[{ x/3, y }] = d+1;
    }
    if (y%3 == 0 && !dist.count({ x, y/3 })) {
      q.push({ x, y/3 });
      dist[{ x, y/3 }] = d+1;
    }
    if (x%5 == 0 && !dist.count({ x/5, y })) {
      q.push({ x/5, y });
      dist[{ x/5, y }] = d+1;
    }
    if (y%5 == 0 && !dist.count({ x, y/5 })) {
      q.push({ x, y/5 });
      dist[{ x, y/5 }] = d+1;
    }
  }
  cout << "-1\n";
  return 0;
}