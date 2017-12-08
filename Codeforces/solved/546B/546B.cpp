#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  sort(A.begin(), A.end());
  int ans = 0;
  for (int i=1;i<N;i++) {
    if (A[i] <= A[i-1]) {
      ans += A[i-1]+1 - A[i];
      A[i] = A[i-1]+1;
    }
  }

  cout << ans << endl;


  return 0;
}
