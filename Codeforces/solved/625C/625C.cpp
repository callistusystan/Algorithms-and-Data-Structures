#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  K--;
  int l = 1, r = N*N;
  vector<vi> A(N, vi(N));
  for (int i=0;i<N;i++) {
    // fill 0..k-1 with small
    for (int j=0;j<K;j++) A[i][j] = l++;
    // have N-(k-1) to fill, i.e. N-k+1
    for (int j=N-1;j>=K;j--) A[i][j] = r--;
  }
  int ans = 0;
  for (int i=0;i<N;i++) ans += A[i][K];
  cout << ans << endl;
  for (int i=0;i<N;i++) {
    for (int j=0;j<N;j++) {
      cout << A[i][j] << " \n"[j==N-1];
    }
  }
  return 0;
}
