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
  int i=0, j=0, ans=0;
  while (i < N && j < M) {
    if (B[j] >= A[i]) {
      ans++;
      j++;
    }
    i++;
  }
  cout << ans << endl;
  return 0;
}
