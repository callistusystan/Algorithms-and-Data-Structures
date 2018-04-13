#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

struct trip {
  int x,y,z;
};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M,K; cin >> N >> M >> K;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  vector<trip> ops(M);
  for (int i=0;i<M;i++) {
    cin >> ops[i].x >> ops[i].y >> ops[i].z;
    ops[i].x--; ops[i].y--;
  }
  vector<ll> cntOps(M+5);
  while (K--) {
    int li,ri; cin >> li >> ri;
    li--; ri--;
    cntOps[li]++; cntOps[ri+1]--;
  }
  for (int i=1;i<M;i++) cntOps[i] += cntOps[i-1];
  vector<ll> cnt(N+5);
  for (int i=0;i<M;i++) {
    cnt[ops[i].x] += cntOps[i]*ops[i].z;
    cnt[ops[i].y+1] -= cntOps[i]*ops[i].z;
  }
  for (int i=1;i<N;i++) cnt[i] += cnt[i-1];
  for (int i=0;i<N;i++) {
    cout << A[i]+cnt[i] << " \n"[i==N-1];
  }
  return 0;
}
