#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi parent(105), _rank(105);

void init(int N) {
  for (int i=0;i<N;i++) parent[i] = i;
}

int root(int x) {
  if (parent[x] != x) parent[x] = root(parent[x]);
  return parent[x];
}

void connect(int x, int y) {
  int rx = root(x), ry = root(y);
  if (rx == ry) return;
  if (_rank[rx] <= _rank[ry]) {
    parent[rx] = ry;
    _rank[ry] += _rank[rx];
  } else {
    parent[ry] = rx;
    _rank[rx] += _rank[ry];
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<vector<bool>> A(N, vector<bool>(M));
  bool noLang = true;
  for (int i=0;i<N;i++) {
    int k; cin >> k;
    if (k) noLang = false;
    for (int j=0;j<k;j++) {
      int l; cin >> l;
      A[i][l-1] = true;
    }
  }

  if (noLang) {
    cout << N << endl;
    return 0;
  }

  init(N);

  for (int i=0;i<N;i++) {
    for (int j=0;j<N;j++) {
      for (int k=0;k<M;k++) {
        if (A[i][k] && A[j][k]) {
          connect(i, j);
          break;
        }
      }
    }
  }

  int nComp = 0;
  for (int i=0;i<N;i++) {
    if (parent[i] == i) nComp++;
  }
  cout << nComp - 1 << endl;

  return 0;
}
