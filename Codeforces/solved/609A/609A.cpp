#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int M; cin >> M;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  sort(A.begin(), A.end(), greater<int>());

  int ans = 0;
  while (M > 0) {
    M -= A[ans];
    ans++;
  }
  cout << ans << endl;

  return 0;
}
