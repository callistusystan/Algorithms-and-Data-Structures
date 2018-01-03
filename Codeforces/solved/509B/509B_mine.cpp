#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi A(105), pointers(105);
vector<vi> ans(105);

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,K; cin >> N >> K;
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<N;i++) ans[i].resize(A[i]);
  int m = A[0];
  for (int i=1;i<N;i++) m = min(m, A[i]);
  for (int i=0;i<N;i++) {
    for (int j=0;j<m;j++) {
      ans[i][j] = 1;
    }
    pointers[i] += m;
    if (A[i] > m) {
      pointers[i]++;
      ans[i][m] = 1;
    }
  }
  for (int c=2;c<=K;c++) {
    for (int i=0;i<N;i++) {
      if (pointers[i] < A[i]) {
        ans[i][pointers[i]] = c;
        pointers[i]++;
      }
    }
  }
  bool can = true;
  for (int i=0;i<N;i++) {
    if (pointers[i] < A[i]) can = false;
  }
  if (can) {
    cout << "YES\n";
    for (int i=0;i<N;i++) {
      for (int j=0;j<A[i];j++) {
        cout << ans[i][j] << " \n"[j==A[i]-1];
      }
    }
  } else cout << "NO\n";
  return 0;
}
