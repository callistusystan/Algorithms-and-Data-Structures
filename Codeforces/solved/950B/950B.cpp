#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<ll> A(N), B(M);
  for (int i=0;i<N;i++) {
    cin >> A[i];
    if (i) A[i] += A[i-1];
  }
  for (int i=0;i<M;i++) {
    cin >> B[i];
    if (i) B[i] += B[i-1];
  }
  int i = 0, j = 0;
  int ans = 0;
  while (i < N && j < M) {
    if (A[i] == B[j]) {
      i++; j++; ans++;
    } else if (A[i] < B[j]) {
      i++;
    } else {
      j++;
    }
  }
  cout << ans << endl;
  return 0;
}
