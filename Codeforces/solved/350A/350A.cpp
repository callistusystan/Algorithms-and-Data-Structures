#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vi A(N), B(M);
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<M;i++) cin >> B[i];

  int v = *max_element(A.begin(), A.end());
  int a_small = *min_element(A.begin(), A.end());
  int b_small = *min_element(B.begin(), B.end());

  if (max(v, 2*a_small) < b_small) cout << max(v, 2*a_small);
  else cout << -1;
  cout << endl;

  return 0;
}
