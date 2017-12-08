#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

template <typename T> struct SparseTable {
  int n; vector<vector<T>> sptable; vi lg;

  SparseTable(const vector <T> &A) : n(A.size()), lg(n+1, 0) {
    for (int i = 2; i <= n; i ++) lg[i] = lg[i /2] + 1;
    sptable.assign (lg[n] + 1, vector <ll>(n));
    for (int i = 0; i < n; i++) sptable [0][i] = A[i];
    for (int i = 1; i <= lg[n]; i++) for (int j = 0; j + (1 << i) - 1 < n; j++)
    sptable[i][j] = (sptable [i -1][j] | sptable [i-1][j + (1 << (i -1) )]);
  }

  T query (int L, int R) { // Find { min A[L..R], i}
    int k = lg[R - L + 1];
    return (sptable[k][L] | sptable[k][R - (1 << k) + 1]);
  }
};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<ll> A(N), B(N);
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<N;i++) cin >> B[i];

  SparseTable<ll> STA(A), STB(B);

  ll ans = 0;
  for (int i=0;i<N;i++) {
    for (int j=i;j<N;j++) {
      ans = max(ans, STA.query(i,j) + STB.query(i,j));
    }
  }
  cout << ans << endl;

  return 0;
}
