#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N;
vi cnt(1e6+1), balance(1e6+1);
vector<vi> rmq;

int query(int l, int r) {
  int k = log2(r-l+1);
  return min(rmq[k][l], rmq[k][r-(1<<k)+1]);
}

void initRmq() {
  for (int i=1;i<=N;i++) rmq[0][i] = balance[i];
  for (int i=1;i<=(int)log2(N);i++)
    for (int j=1;j+(1<<i)-1<=N;j++)
      rmq[i][j] = min(rmq[i-1][j], rmq[i-1][j+(1<<(i-1))]);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  N = S.size();
  rmq.assign((int)log2(N)+1, vi(N+1));
  for (int i=0;i<N;i++) {
    cnt[i+1] = cnt[i] + (S[i] == ')');
    balance[i+1] = balance[i] + (S[i] == '(' ? 1 : -1);
  }
  initRmq();
  int M; cin >> M;
  while (M--) {
    int l, r; cin >> l >> r;
    int nClose = cnt[r] - cnt[l-1];
    int minBalance = query(l, r) - rmq[0][l-1];
    // if minBalance is negative, then there are unmatched )
    if (minBalance < 0) cout << 2*(nClose + minBalance) << endl;   
    else cout << 2*(nClose) << endl;
  }
  return 0;
}
