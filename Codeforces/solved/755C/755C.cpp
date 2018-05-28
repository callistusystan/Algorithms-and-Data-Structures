#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi parent(1e4+5), rankk(1e4+5, 1);

int root(int x) {
  if (parent[x] == x) return x;
  return parent[x] = root(parent[x]);
}

void join(int x, int y) {
  int rx = root(x), ry = root(y);
  if (rx == ry) return;

  if (rankk[rx] <= rankk[ry]) {
    parent[rx] = ry; 
    rankk[ry] += rankk[rx];
  } else {
    parent[ry] = rx; 
    rankk[rx] += rankk[ry];
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i=0;i<1e4+5;i++) parent[i] = i;

  int N; cin >> N;
  for (int i=0;i<N;i++) {
    int j; cin >> j;
    join(i, j-1);
  }
  set<int> roots;
  for (int i=0;i<N;i++) roots.insert(root(i));
  cout << roots.size() << endl;
  return 0;
}
