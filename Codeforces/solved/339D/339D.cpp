#include <bits/stdc++.h>
using namespace std;

#define SZ(x) (int)x.size()

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi A(1e6);

void update(int cur, int op) {
  if (cur == 0) return;
  if (op) {
    A[cur] = (A[cur*2] | A[cur*2+1]);
  } else {
    A[cur] = (A[cur*2] ^ A[cur*2+1]);
  }
  update(cur/2, 1-op);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  int INNER_NODES = (1<<N)-1;
  for (int i=1;i<=(1<<N);i++) {
    cin >> A[INNER_NODES+i];
    update((INNER_NODES+i)/2, 1);
  }
  while (M--) {
    int i, ai; cin >> i >> ai;
    A[INNER_NODES+i] = ai;
    update((INNER_NODES+i)/2, 1);
    cout << A[1] << endl;
  }
  return 0;
}
