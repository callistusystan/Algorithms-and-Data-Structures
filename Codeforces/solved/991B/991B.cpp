#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N); int sum = 0;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    A[i] *= 10;
    sum += A[i];
  }
  int need = 45*N - sum;
  sort(A.begin(), A.end());
  int ans = 0;
  for (int i=0;i<N;i++) {
    if (need > 0) {
      need -= 50-A[i];
      ans++;
    } else break;
  }
  cout << ans << endl;
  return 0;
}
