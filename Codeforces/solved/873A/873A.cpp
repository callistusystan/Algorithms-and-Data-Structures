#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K, X; cin >> N >> K >> X;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  sort(A.begin(), A.end());
  for (int i=0;i<K;i++) A[N-1-i] = X;
  int ans = 0;
  for (int i=0;i<N;i++) ans += A[i];
  cout << ans << endl;
  return 0;
}
