#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<vi> A(N, vi(N));
  for (int i=0;i<N;i++)
    for (int j=0;j<N;j++)
      cin >> A[i][j];
  vi ans(N);
  for (int i=0;i<N;i++) {
    ans[i] = *max_element(A[i].begin(), A[i].end());
  }
  for (int i=0;i<N;i++)
    if (ans[i] == N-1) {
      ans[i] = N;
      break;
    }
  for (int i=0;i<N;i++) {
    cout << ans[i] << " \n"[i==N-1];
  }
  return 0;
}
