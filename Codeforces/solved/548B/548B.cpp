#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N,M,Q; 
vector<vi> A(505, vi(505));
vi cnt(505);

int f(int i) {
  int cur = 0, res = 0;
  for (int j=0;j<M;j++) {
    if (A[i][j] == 0) cur = 0;
    else cur++;
    res = max(res, cur);
  }
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> M >> Q;
  for (int i=0;i<N;i++)
    for (int j=0;j<M;j++)
      cin >> A[i][j];
  for (int i=0;i<N;i++) cnt[i] = f(i);
  while (Q--) {
    int x,y; cin >> x >> y;
    x--; y--;
    A[x][y] = 1 - A[x][y];
    cnt[x] = f(x);
    cout << *max_element(cnt.begin(), cnt.end()) << endl;
  }
  return 0;
}
