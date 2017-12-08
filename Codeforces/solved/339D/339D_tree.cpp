#include <bits/stdc++.h>
using namespace std;

#define SZ(x) (int)x.size()

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int OR = 1;
int N, M;
vi A(1e6);

void upd(int cur, int l, int r, int i, int val, int &op) {
  if (l == r) {
    A[cur] = val;
    op = OR;
  } else {
    int mid = (l+r)/2;
    if (i <= mid) {
      upd(cur*2, l, mid, i, val, op);
    } else {
      upd(cur*2+1, mid+1, r, i, val, op);
    }
    if (op == OR) A[cur] = A[cur*2] | A[cur*2+1];
    else A[cur] = A[cur*2] ^ A[cur*2+1];
    op = 1-op;
  }
}

void upd(int i, int ai) {
  int op;
  upd(1, 0, (1<<N)-1, i, ai, op);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> M;
  for (int i=0;i<(1<<N);i++) {
    int ai; cin >> ai;
    upd(i, ai);
  }
  while (M--) {
    int i, ai; cin >> i >> ai;
    upd(i-1, ai);
    cout << A[1] << endl;
  }
  return 0;
}
